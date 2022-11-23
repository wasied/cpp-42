NAME = serialize
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp serialization.cpp
HEADERS = serialization.hpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all