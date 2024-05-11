# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 12:37:38 by kfortin           #+#    #+#              #
#    Updated: 2024/05/10 17:25:43 by kfortin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = PhoneBook.cpp Contact.cpp Constructor_Destructor.cpp Print_Storage.cpp main.cpp
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
