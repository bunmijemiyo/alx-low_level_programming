#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Lowercase alphabet
 * Description: It prints the alphabet in lowercase followed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
