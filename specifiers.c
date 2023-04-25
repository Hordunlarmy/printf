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

	if (specifier == '\0')
		return (-1);
	if (specifier == '%')
		r_value += put_c('%');
	else if (specifier == 'c')
		r_value += put_c(va_arg(ap, int));
	else if (specifier == 's')
		r_value += put_s(va_arg(ap, char *));
	else if (specifier == 'b')
		r_value += put_b(va_arg(ap, int));
	else if (specifier == 'u')
		r_value += put_u(va_arg(ap, unsigned int));
	else if (specifier == 'o')
		r_value += put_o(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		r_value += put_x(va_arg(ap, unsigned int));
	else if (specifier == 'X')
		r_value += put_X(va_arg(ap, unsigned int));
	else if (specifier == 'S')
		r_value += put_S(va_arg(ap, char *));
	else if (specifier == 'p')
		r_value += put_p(va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		r_value += put_d(va_arg(ap, int));
	else
	{
		put_c('%');
		put_c(specifier);
		r_value += 2;
	}
	return (r_value);
}
