#include "main.h"
#include <unistd.h>

/**
 *  put_c - Entry point
 *  @c: character passed
 *  Return: a character
 */
int put_c(char c)
{
	return (write(1, &c, 1));
}

/**
 * put_chr - Entry point
 * @ap: arguments passed
 * Return: a character
 */
int put_chr(va_list ap)
{
	int r_value = 0;

	r_value = put_c(va_arg(ap, int));

	return (r_value);
}
