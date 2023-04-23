#include "main.h"

/**
 * put_d - Entry point
 * @n: number to be printed
 * Return: a number
 */
int put_d(int n)
{
	unsigned int m;
	int r_value = 0;
	long int rev = 1;

	if (n < 0)
	{
		r_value += put_c('-');
		m = n * -1;
	}
	m = n;

	if (n == 0)
	{
		put_c('0');
	}

	while (m > 0)
	{
		rev = (rev * 10) + (m % 10);
		m /= 10;
	}

	while (rev > 1)
	{
		r_value += put_c(rev % 10 + '0');
		rev /= 10;
	}

	return (r_value);
}
