CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

NAME		=	RPN

SRC			=	main.cpp RPN.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all