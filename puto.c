#include "main.h"

/**
 * put_o - Entry point
 * @n: number being checked
 * Return: an octal number
 */
int put_o(unsigned int n)
{
	static char buffer[1024];
	char *p = &buffer[1023];
	static const char  oct[] = "0123456789ABCDEF";
	int r_value = 0;

	*p = '\0';

	do {
		*--p = oct[n % 8];
		n /= 8;
	} while (n != 0);

	while (*p != '\0')
	{
		r_value += put_c(*p);
		p++;
	}

	return (r_value);
}
