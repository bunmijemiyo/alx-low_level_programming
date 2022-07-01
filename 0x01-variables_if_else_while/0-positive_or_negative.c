#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - finds a random number
 *
 *  Description: Returns is Positive or is negative or 0
 *  Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
