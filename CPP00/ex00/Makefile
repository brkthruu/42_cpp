CC = clang++
VERSION = -std=c++98
NAME = megaphone
FLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
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