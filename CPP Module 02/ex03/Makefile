# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 21:31:24 by aalfahal          #+#    #+#              #
#    Updated: 2023/06/25 15:40:50 by aalfahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

NAME		=	Fixed

SRC			=	main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all