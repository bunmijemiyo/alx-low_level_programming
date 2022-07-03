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
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
