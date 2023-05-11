# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 18:45:43 by aalfahal          #+#    #+#              #
#    Updated: 2023/05/04 05:37:46 by aalfahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

NAME		=	megaphone

SRC			=	megaphone.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all