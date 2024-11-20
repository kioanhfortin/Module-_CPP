# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 18:28:44 by kfortin           #+#    #+#              #
#    Updated: 2024/11/19 18:52:17 by kfortin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Bureaucrat.cpp Form.cpp
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