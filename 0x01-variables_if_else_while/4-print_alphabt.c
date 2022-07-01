#include <stdio.h>

/**
 *	main - alphabet in lowercase, followed by a new line.
 *
 *	Description: Prints letter a-z in lower case,except p and e
 *
 *	Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
