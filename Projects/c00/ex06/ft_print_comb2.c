// Post-Piscine work for personal fullfilment! //

#include <unistd.h>

void	write_if_valid(char x[2], char y[2])
{
	if (x[0] < y[0] || (x[0] == y[0] && x[1] < y[1]))
	{
		write(1, &x[0], 1);
		write(1, &x[1], 1);
		write(1, " ", 1);
		write(1, &y[0], 1);
		write(1, &y[1], 1);
		if (!(x[0] == '9' && x[1] == '8' && y[0] == '9' && y[1] == '9'))
			write(1, ", ", 2);
		}
}

void	ft_print_comb2(void)
{
	char	x[2];
	char	y[2];

	x[0] = '0';
	x[1] = '0';
	while (x[0] <= '9')
	{
		while (x[1] <= '9')
		{
			y[0] = '0';
			y[1] = '0';
			while (y[0] <= '9')
			{
				while (y[1] <= '9')
				{
					write_if_valid(x, y);
					y[1]++;
				}
				y[1] = '0';
				y[0]++;
			}
			x[1]++;
		}
		x[1] = '0';
		x[0]++;
	}
}

// int	main()
// {
// 	ft_print_comb2();
// 	return 0;
// }
