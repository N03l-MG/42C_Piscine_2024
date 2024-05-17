// Post-Piscine work for personal fullfilment! //

#include <unistd.h>

void	write_if_unique(char a, char b, char c)
{
	if (!(a == b && b == c && c == a))
	{
		write(1, &c, 1);
		write(1, &b, 1);
		write(1, &a, 1);
		if (!(c == '7' && b == '8' && a == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	c = '0';
	while (c <= '7')
	{
		b = c + 1;
		while (b <= '8')
		{
			a = b + 1;
			while (a <= '9')
			{
				write_if_unique(a, b, c);
				a++;
			}
			a = '0';
			b++;
		}
		b = '0';
		c++;
	}
}

// int	main()
// {
// 	ft_print_comb();
// 	return 0;
// }
