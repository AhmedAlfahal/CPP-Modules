# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 23:42:09 by aalfahal          #+#    #+#              #
#    Updated: 2023/12/24 23:43:09 by aalfahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

NAME		=	base

SRC			=	main.cpp Base.cpp A.cpp B.cpp C.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all