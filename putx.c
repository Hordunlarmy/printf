#include "main.h"

/**
 * put_x - Entry point
 * @n: number being checked
 * Return: a lower hex number
 */
int put_x(unsigned int n)
{
	static char buffer[1024];
	char *p = &buffer[1023];
	static const char  hex[] = "0123456789abcdef";
	int r_value = 0;

	*p = '\0';

	do {
		*--p = hex[n % 16];
		n /= 16;
	} while (n != 0);

	while (*p != '\0')
	{
		r_value += put_c(*p);
		p++;
	}

	return (r_value);
}


/**
 * put_X - Entry point
 * @n: number being checked
 * Return: a lower hex number
 */
int put_X(unsigned int n)
{
	static char buffer[1024];
	char *p = &buffer[1023];
	static const char  hex[] = "0123456789ABCDEF";
	int r_value = 0;

	*p = '\0';

	do {
		*--p = hex[n % 16];
		n /= 16;
	} while (n != 0);

	while (*p != '\0')
	{
		r_value += put_c(*p);
		p++;
	}

	return (r_value);
}
