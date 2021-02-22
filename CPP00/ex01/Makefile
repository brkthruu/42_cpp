CC = clang++
VERSION = -std=c++98
NAME = phonebook
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp contact.cpp search.cpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) $(VERSION) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(VERSION) $(OBJS) -o $(NAME)

all: $(NAME)

clean :
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re .cpp.o