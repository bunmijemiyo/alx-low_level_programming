#include <stdio.h>

/**
 *	main - Numbers.
 *
 *	Description: Prints numbers from 0 to 9
 *
 *	Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
