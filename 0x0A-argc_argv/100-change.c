#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change
 * @argc: Number of string
 * @argv: Array of string arrays
 * Return: (1) If program arguments contain letter, otherwise return (0).
 */
int main(int argc, char *argv[])
{
	int num, j, n_coin;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n_coin = 0;
	if (argc == 2)
	{
		num  = atoi(argv[1]);
		if (num >= 0)
		{
			j = 0;
			while (j < 5)
			{
				while (coin[j] <= num)
				{	n_coin++;
					num -= coin[j];
				}
				j++;
			}
		}
		else
		{
			printf("0\n");
			return (0);
		}	
	}
	printf("%d\n", n_coin);
	return (0);
}
