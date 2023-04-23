#include "main.h"

/**
 * put_d - Entry point
 * @n: number to be printed
 * Return: a number
 */
int put_d(int n)
{
	int r_value = 0;

	if (n == 0)
		r_value += put_c('0');

	if(n < 0)
	{
		r_value += put_c('-');
		n = -n;
	}

	if (n / 10)
	{
		r_value += put_d(n / 10);
	}

	r_value += put_c(n % 10 + '0');

	return (r_value);
}
