# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 16:10:42 by aalfahal          #+#    #+#              #
#    Updated: 2023/05/12 18:53:51 by aalfahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g3

NAME		=	Zombie

SRC			=	main.cpp Zombie.cpp zombieHorde.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all