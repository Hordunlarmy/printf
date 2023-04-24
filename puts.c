#include "main.h"

/**
 * put_s - Entry point
 * @ap: argument pararmeter
 * Return: a string
 */
int put_s(va_list ap)
{
	char *string = va_arg(ap, char *);
	int i, r_value = 0;

	if (!string)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
	{
		r_value += put_c(string[i]);
	}

	return (r_value);

}
