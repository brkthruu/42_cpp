CC = clang++
VERSION = -std=c++98
NAME = convert
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Convert.cpp
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