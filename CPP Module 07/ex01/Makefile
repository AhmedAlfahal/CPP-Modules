# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 23:42:09 by aalfahal          #+#    #+#              #
#    Updated: 2023/12/26 19:49:41 by aalfahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

NAME		=	iter

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