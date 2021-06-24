#include <stdio.h>
#include <stdint.h>

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: void
 */
int main(void)
{
	uintmax_t to_factor = 612852475;
	unsigned long prime_factor = 2;

	to_factor = to_factor * 1000 + 143;
	
	if (to_factor % 3 == 0)
	{
		to_factor = to_factor / 3;
		prime_factor = 3;
	}
	while (to_factor != 1)
	{
		while(to_factor % prime_factor != 0)
		{
			prime_factor += 2;
		}
		to_factor /= prime_factor;
	}
	printf("%lu\n",prime_factor);

	return (0);
}