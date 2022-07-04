#include <stdio.h>

/**
 *	main - single digit combinations
 *
 *	Description: Prints all possible combinations of single digit
 *
 *	Return: 0
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
