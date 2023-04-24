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
			r_value += put_c('%');
			break;
		case 'c':
			r_value += put_c(va_arg(ap, int));
			break;
		case 's':
			r_value += put_s(va_arg(ap, char *));
			break;
		case 'b':
			r_value += put_b(va_arg(ap, int));
			break;
		case 'u':
			r_value += put_u(va_arg(ap, unsigned int));
			break;
		case 'o':
			r_value += put_o(va_arg(ap, unsigned int));
			break;
		case 'x':
			r_value += put_x(var_arg(ap, unsigned int));
			break;
		case 'X':
			r_value += put_X(var_arg(ap, unsigned int));
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
