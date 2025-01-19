NAME = PmergeMe

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp PmergeMe.cpp
# SRCS = main.cpp PmergeMeDeque.cpp
OBJS = $(SRCS:.cpp=.o)

RM = rm -f

BREW = /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
SHUF_CMD = shuf

all: check_shuf $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

check_shuf:
	@command -v $(SHUF_CMD) >/dev/null 2>&1 || { \
		echo "shuf not found. Installing coreutils with Homebrew..."; \
		brew list coreutils >/dev/null 2>&1 || brew install coreutils; \
		echo "Installation complete. You can now use shuf as gshuf."; \
	}

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
