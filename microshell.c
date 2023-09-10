#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int ft_strlen(char *s)
{
	if (!s || !*s)
		return (0);
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
int ft_write(char *str, char *arg, char *acg)
{
	if (str)
		write(2, str, ft_strlen(str));
	if (arg)
		write(2, arg, ft_strlen(arg));
	if (acg)
		write(2, acg, ft_strlen(acg));
	write(2, "\n", 1);
	return (1);
}

void	ft_cding(char **av, int i)
{
	if (i != 2)
		ft_write("error: ",  "cd: ", "bad arguments");
	else if (chdir(av[1]) != 0)
		ft_write("error: ", "cd: cannot change directory to ", av[1]);
}

int ft_exec(char **av, int i, int tmp, char **env)
{
	av[i] = 0;
	dup2(tmp, 0);
	close(tmp);
	execve(av[0], av, env);
	return (ft_write("error:", " cannot execute ", av[0]));
}

int main(int ac, char **av ,char **env)
{
	int i = 0;
	int tmp = dup(0);
	int fd[2];
	int pid = 0;
	
	(void)ac;
	while (av[i] && av[i + 1])
	{
		av = &av[i + 1];
		i = 0;
		while (av[i] && strcmp(av[i], ";") && strcmp(av[i], "|"))
			i++;
		if (!strcmp(av[0], "cd"))
			ft_cding(av, i);
		else if (i && (!av[i] || !strcmp(av[i], ";")))
		{
			pid = fork();
			if (pid == 0)
			{
				if (ft_exec(av, i, tmp, env))
					return (1);
			}
			else
			{
				close(tmp);
				waitpid(pid, 0, 0);
				tmp = dup(0);
			}
		}
		else if(i && !strcmp(av[i], "|"))
		{
			pipe(fd);
			pid = fork();
			if (pid == 0)
			{
				dup2(fd[1], 1);
				close(fd[0]);
				close(fd[1]);
				if (ft_exec(av, i, tmp, env))
					return (1);
			}
			else
			{
				close(fd[1]);
				close(tmp);
				tmp = fd[0];
			}
		}
	}
	close(tmp);
	return(0);
}