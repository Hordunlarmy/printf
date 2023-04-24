#include "main.h"

/**
  * put_u - Entry point
  * @n: number being checked
  * Return: an unsigned int
 */
int put_u(unsigned int n)
{
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
