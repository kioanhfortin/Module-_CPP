NAME = serialize

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp serialize.cpp data.cpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -f

all : $(NAME)

$(NAME) :		$(OBJS)
						$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
				$(RM) $(OBJS)

fclean : clean
				$(RM) $(NAME)

re : fclean all