
CC = gcc
FLAGS = -Wall -Wextra -Werror
SOURCE = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
INCLUDE = ./includes/

OBJ=$(SOURCE:.c=.o)
TARGET=libft.a

OBJ = $(SOURCE:.c=.o)

all: libft.a

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)
	rm -f $(TARGET)

libft.a: $(OBJ)
	ar rc $(TARGET) $(OBJ)

.c.o:
	$(CC) ${FLAGS} -c -I ${INCLUDE} $< -o $@

.PHONY: all clean fclean re