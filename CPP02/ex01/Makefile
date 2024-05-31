# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 18:39:52 by kfortin           #+#    #+#              #
#    Updated: 2024/05/31 18:39:58 by kfortin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = first_use
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Fixed.cpp
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
