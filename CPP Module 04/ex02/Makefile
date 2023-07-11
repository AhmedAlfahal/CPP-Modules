# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/01 23:25:46 by aalfahal          #+#    #+#              #
#    Updated: 2023/07/11 20:32:43 by aalfahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g3

NAME		=	Animal

SRC			=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all