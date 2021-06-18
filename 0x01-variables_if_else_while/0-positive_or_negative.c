#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints if n is positive, negative or 0
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);

	return (1);
}
