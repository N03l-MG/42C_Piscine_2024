#include <unistd.h>

int ft_ten_queens_puzzle(void);
int IsValid(int board[10][10], int i, int j);
void PlaceQueensRecur(int board[10][10], int i, int *poss);
void ft_putnbr(int nb);
// main commented for hypothetical sumbission
/* int main()
{
	ft_ten_queens_puzzle();
	return 0;
} */

int ft_ten_queens_puzzle(void) // using for loops and breaking norminette rules!
{
	int board[10][10];
	int possibilities = 0;
	int i = 0;

	for (int r = 0; r < 10; r++)
	{
		for (int c = 0; c < 10; c++)
		{
			board[r][c] = 0;
		}
	}
	PlaceQueensRecur(board, i, &possibilities);

	ft_putnbr(possibilities); // optional print out of total possibility count
	write(1, "\n", 1);
}

int IsValid(int board[10][10], int i, int j)
{
	int leftDiag = j;
	int rightDiag = j;

	while (i >= 0)
	{
		if ((leftDiag >= 0 && board[i][leftDiag] == 1)
		|| (rightDiag < 10 && board[i][rightDiag] == 1)
		|| board[i][j] == 1) {
			return 0;
		}
		i -= 1;
		leftDiag -= 1;
		rightDiag += 1;
	}
	return 1;
}

void PlaceQueensRecur(int board[10][10], int i, int *poss)
{
	if (i == 10) {
		for (int r = 0; r < 10; r++)
		{
			for (int c = 0; c < 10; c++)
			{
				if (board[r][c] == 1) {
					char digit = c + '0';
					write(1, &digit, 1);
				}
			}
		}
		write(1, "\n", 1);
		(*poss)++;
		return;
	}
	for (int j = 0; j < 10; j++)
	{
		if (IsValid(board, i, j) == 1) {
			board[i][j] = 1;
			PlaceQueensRecur(board, i + 1, poss);
			board[i][j] = 0;
		}
	}
}
// putnbr for optional printing of total possibilities
void ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}
