#include "main.h"

/**
 * spec_handle - Entry point
 * @specifier: specifier
 * @ap: arguement parameter
 * Return: success
 */
int spec_handle(va_list ap, char specifier)
{
	int r_value = 0;

	switch (specifier)
	{
		case '%':
			put_c('%');
			r_value++;
			break;
		case 'c':
			put_c(va_arg(ap, int));
			r_value++;
			break;
		case 's':
			r_value += put_s(va_arg(ap, char *));
			break;
		case 'd':
		case 'i':
			r_value += put_d(va_arg(ap, int));
			break;
		default:
			put_c('%');
			put_c(specifier);
			r_value += 2;
				break;
	}
	return (r_value);
}
