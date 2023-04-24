#include "main.h"

/**
  * put_o - Entry point
  * @n: number being checked
  * Return: an octal number
 */
int put_o(unsigned int n)
{
	int i, j, r_value = 0;
	char octal[32];

	for (i = 0; n > 0; i++)
	{
		*(octal + i) = n % 8 + '0';
		n /= 8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		r_value += put_c(*(octal + j));
	}

	return (r_value);
}
