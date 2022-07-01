#include <stdio.h>

/**
 *	main - alphabet in lowercase, followed by a new line.
 *
 *	Description: Prints letter a to z in lower case
 *
 *	Return: 0
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
