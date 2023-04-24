#include "main.h"

/**
 * put_d - Entry point
 * @ap: argument passed
 * Return: a number
 */
int put_d(va_list ap)
{
	int n = va_arg(ap, int);
	unsigned int x, y, i;
	unsigned int r_value = 0;

	if (n < 0)
	{
		x = (n * -1);
		r_value += put_c('-');
	}
	else
		 x = n;

	y = x;
	i = 1;

	while (y > 9)
	{
		y /= 10;
		i *= 10;
	}
	while (i >= 1)
	{
		r_value += put_c((x / i) % 10 + '0');
		i /= 10;
	}

	return (r_value);

}
