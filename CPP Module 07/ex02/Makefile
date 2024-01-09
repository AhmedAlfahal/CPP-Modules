# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 23:42:09 by aalfahal          #+#    #+#              #
#    Updated: 2024/01/07 23:36:37 by aalfahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -g3 -std=c++98

NAME		=	array

SRC			=	main.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all