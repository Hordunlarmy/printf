#include "main.h"

/**
  * handle_octal - Entry point
  * @ap: argument passed
  * Return: a function
 */
int handle_octal(va_list ap)
{
	return (put_o(va_arg(ap, unsigned int)));
}

/**
  * handle_hex - Entry point
  * @ap: argument passed
  * Return: a function
 */
int handle_hex(va_list ap)
{
	return (put_x(va_arg(ap, unsigned int)));
}

/**
  * handle_hex_upper - Entry point
  * @ap: argument passed
  * Return: a function
 */
int handle_hex_upper(va_list ap)
{
	return (put_X(va_arg(ap, unsigned int)));
}

/**
  * handle_decimal - Entry point
  * @ap: argument passed
  * Return: a function
 */
int handle_decimal(va_list ap)
{
	return (put_d(va_arg(ap, int)));
}
