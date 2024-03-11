CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

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