#include <stdio.h>

/**
 *	main - hexadecimal numbers.
 *
 *	Description: Prints all letters of hexadecimal
 *
 *	Return: 0
 */

int main(void)
{
	char letter = 'a';
	int num = 0;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
