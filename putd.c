#include "main.h"


int put_d(int n)
{
	int r_value = 0;
	if (n < 0)
	{
		put_c('-');
		n = -num;
	}

	if (n / 10)
	{
		r_value += put_d(n / 10);
	}
	r_value += put_c((n % 10) + '0');

	return (r_value)
}
