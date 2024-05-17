// Post-Piscine work for personal fullfilment! //

#include <unistd.h>
#include <stdbool.h>

void	put_chars(char *chars, int l)
{
	write(1, chars, l);
}

void	ft_print_combn(int n) // breaking the norm because how the hell else lol
{
	char	nums[10];
	int		i;

	if (n < 1 || n > 10)
		return;

	for (i = 0; i < n; i++)
		nums[i] = '0' + i;

	while (true)
	{
		put_chars(nums, n);
		if (nums[0] == '9' - n + 1)
			break;

		write(1, ", ", 2);
		// evil empty for-loop trick!
		for (i = n - 1; i >= 0 && nums[i] == '9' - (n - 1 - i); i--);

		if (i >= 0)
		{
			nums[i]++;
			for (int j = i + 1; j < n; j++)
			{
				nums[j] = nums[j - 1] + 1;
			}
		}
	}
}

// int	main(void)
// {
// 	for (int i = 1; i < 11; i++)
// 	{
// 		ft_print_combn(i);
// 		write(1, "\n", 1);
// 	}
// 	return 0;
// }
