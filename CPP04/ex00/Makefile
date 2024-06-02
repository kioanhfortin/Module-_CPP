# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/02 18:56:04 by kfortin           #+#    #+#              #
#    Updated: 2024/06/02 18:56:05 by kfortin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = polymorph
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Contact.cpp PhoneBook.cpp Print_Storage.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all :	$(NAME)

$(NAME) :	$(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)

re : fclean all
