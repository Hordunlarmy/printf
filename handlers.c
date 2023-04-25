#include "main.h"

/**
  * handle_percent - Entry point
  * @ap: argument passed
  * Return: a function
  */
int handle_percent(va_list ap)
{
	return (put_c('%'));
}

/**
 * handle_char - Entry point
 * @ap: argument passed
 * Return: a function
 */
int handle_char(va_list ap)
{
	return (put_c(va_arg(ap, int)));
}

/**
 * handle_string - Entry point
 * @ap: argument passed
 * Return: a function
 */
int handle_string(va_list ap)
{
	return (put_s(va_arg(ap, char *)));
}

/**
 * handle_binary - Entry point
 * @ap: argument passed
 * Return: a function
 */
int handle_binary(va_list ap)
{
	return (put_b(va_arg(ap, int)));
}

/**
 * handle_unsigned - Entry point
 * @ap: argument passed
 * Return: a function
 */
int handle_unsigned(va_list ap)
{
	return (put_u(va_arg(ap, unsigned int)));
}
