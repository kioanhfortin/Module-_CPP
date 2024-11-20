# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 18:28:44 by kfortin           #+#    #+#              #
#    Updated: 2024/11/19 20:57:27 by kfortin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AForm

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
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