#include "main.h"

/**
  * put_u - Entry point
  * @ap: argument passed
  * Return: an unsigned int
 */
int put_u(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	unsigned int m = 1000000000;
	int num[10];
	int i, r_value = 0;

	for (i = 0; i < 10; i++)
	{
		*(num + i) = n / m;
		n %= m;
		m /= 10;
	}

	for (i = 0; i < 10; i++)
	{
		if (*(num + i) != 0 || i == 9)
			r_value += put_c(*(num + i) + '0');
	}

	return (r_value);
}
