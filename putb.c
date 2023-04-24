#include "main.h"

/**
 * put_b - Entry point
 * @ap: argument passed
 * Return: binary unsigned int
 */
int put_b(va_list ap)
{
	int n = va_arg(ap, int);
	unsigned int m, i;
	unsigned int sum = 0;
	unsigned int num[32];
	int r_value = 0;
	char j;

	m = 2147483648;
	*(num + 0) = n / m;

	for (i = 1; i < 32; i++)
	{
		m /= 2;
		*(num + i) = n / m % 2;
	}

	for (i = 0; i < 32; i++)
	{
		sum += *(num + i);
		if (sum || i == 31)
		{
			j = *(num + i) + '0';
			r_value += put_c(j);
		}
	}

	return (r_value);

}
