NAME = phonebook
CC = c++
CPPFLAGS = -Wall -Wextra -Werror

SRCS = PhoneBook.cpp Contact.cpp utils.cpp main.cpp
HEADERS = PhoneBook.hpp Contact.hpp utils.hpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all