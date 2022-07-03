#include <stdio.h>

/**
 *	main - alphabet in lowercase, and in reverse.
 *
 *	Description: Prints letter a to z in lower case,
 *	using reverse order
 *
 *	Return: 0
 */

int main(void)
{
	char letter = 'z';

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
