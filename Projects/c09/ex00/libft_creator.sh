cc -Wall -Wextra -Werror -c "ft_putstr.c" "ft_strcmp.c" "ft_strlen.c" "ft_swap.c" "ft_putchar.c"
ar rc "libft.a" *.o
rm -f *.o