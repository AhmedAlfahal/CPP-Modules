# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 05:45:57 by aalfahal          #+#    #+#              #
#    Updated: 2023/05/07 16:30:23 by aalfahal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP			=	c++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

NAME		=	PhoneBook

SRC			=	Contact.cpp PhoneBook.cpp main.cpp

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all