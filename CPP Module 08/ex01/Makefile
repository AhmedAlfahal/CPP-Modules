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

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g3 -fsanitize=address

NAME		=	span

SRC			=	main.cpp Span.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all