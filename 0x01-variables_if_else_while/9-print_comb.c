#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints all single-digit combinations
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
