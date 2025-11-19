NAME = magephone

CC = cc 
CFLAGS = -Wall -Werror -Wextra -std=c++98 -lstdc++


CFILES = magephone.cpp

OBJECTS = $(CFILES:.cpp=.o)

all: 

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS)  -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 