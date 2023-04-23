#include "main.h"

/**
 * put_d - Entry point
 * @n: number to be printed
 * Return: a number
 */
int put_d(int n)
{
	int r_value = 0, rev = 0;

	if (n < 0)
	{
		r_value += put_c('-');
		n *= -1;
	}
	else if (n == 0)
	{
		put_c('0');
	}

	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}

	while (rev > 0)
	{
		r_value += put_c(rev % 10 + '0');
		rev /= 10;
	}

	return (r_value);
}
