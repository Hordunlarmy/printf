#include "main.h"

/**
  * put_u - Entry point
  * @n: number being checked
  * Return: an unsigned int
 */
int put_u(unsigned int n)
{
	int num, div = n % 10, digit, exp = 1;
	int r_value = 1;

	n = n / 10;
	num = n;

	if (div < 0)
	{
		put_c('-');
		num = -num;
		n = -n;
		div = -div;
		r_value++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			put_c(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			r_value++;
		}
	}
	put_c(div + '0');

	return (r_value);
}
