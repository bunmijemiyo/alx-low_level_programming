#include <stdio.h>

/**
 *	main - alphabet in lowercase, followed by a new line.
 *
 *	Description: Prints letter a to z in lower case,
 *	and in uppercase
 *
 *	Return: 0
 */

int main(void)
{
	char small_letter = 'a';
	char capital_letter = 'A';

	for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
	{
		putchar(small_letter);
	}

	for (capital_letter = 'A'; capital_letter <= 'Z'; capital_letter++)
	{
		putchar(capital_letter);
	}
	putchar('\n');
	return (0);
}
