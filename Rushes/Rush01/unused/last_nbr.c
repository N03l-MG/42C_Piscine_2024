#include <unistd.h>

// (int **array)

// array[4][4] {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}}
// int i;
// int j;

// i =0
// while (i < 3)
// {
// 	while (j < 3)
// 	{
// 		write(1, &[array[i][j]], 1)
// 		write SPACE
// 		j++;
// 	}
// 	write(1, "\n", 1)
// 	i++
// }


// void the_brainz(int **v, int **h)
// {
// 	()
// 	if ()
// }


// int last_of_a_kind(int *cord int nbr)
// {
// 	// coordinate sets will be created somewhere else
// 	// int cord[6] = {1, 1, 4, 2, 3, 4};
// 	int cord[6] = {1, 1, 4, 2, 3, 4};
// 	int nbr = 4;
// 	int r[2];

// 	r[0] = nbr
// 	r[1] = 10 - (cord[0] + cord[2] + cord[4]);
// 	r[2] = 10 - (cord[1] + cord[3] + cord[5]);

// 	write(1, &"01234"[r[0]], 1);
// 	write(1, ", ", 2);
// 	write(1, &"01234"[r[1]], 1);
// 	return (*r);
// }

//int last_in_row(int *cord, int *arr)
int main(void)
{
	int arr[3] = {1, 3, 4};
	int cord[2] = {2, 3};
	int r[3];

	r[0] = 10 - (arr[0] + arr[1] + arr[2]);
	r[1] = cord[0];
	r[2] = cord[1];
	write(1, &"01234"[r[0]], 1);
	write(1, ", ", 2);
	write(1, &"01234"[r[1]], 1);
	write(1, ", ", 2);
	write(1, &"01234"[r[2]], 1);
	return (*r);
}
