NAME = diamondtrap
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all