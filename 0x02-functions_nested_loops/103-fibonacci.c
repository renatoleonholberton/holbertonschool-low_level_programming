#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	long i;
	long n1, n2;
	long term;
	long long sum;

	n1 = 0;
	n2 = 1;

	term = 0;
	sum = 0;

	while (term < 4000000)
	{
		term = n1 + n2;

		if (term % 2 == 0)
			sum += term;

		n1 = n2;
		n2 = term;
	}

	printf("%lld\n", sum);

	return (0);
}

