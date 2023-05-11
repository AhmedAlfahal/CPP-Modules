# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 16:32:08 by aalfahal          #+#    #+#              #
#    Updated: 2023/05/11 20:00:15 by aalfahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

NAME		=	GlobalBankstersUnited

SRC			=	Account.cpp tests.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all