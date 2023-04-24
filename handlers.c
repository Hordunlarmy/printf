#include "main.h"

int handle_default(char specifier)
{
	put_c('%');
	put_c(specifier);
	return (2);
}

int handle_char(va_list ap)
{
	return (put_c(va_arg(ap, int)));
}

int handle_string(va_list ap)
{
	return (put_s(va_arg(ap, char *)));
}

int handle_binary(va_list ap)
{
	return (put_b(va_arg(ap, int)));
}

int handle_unsigned(va_list ap)
{
	return (put_u(va_arg(ap, unsigned int)));
}

int handle_octal(va_list ap)
{
	return (put_o(va_arg(ap, unsigned int)));
}

int handle_hex(va_list ap)
{
	return (put_x(va_arg(ap, unsigned int)));
}

int handle_hex_upper(va_list ap)
{
	return (put_X(va_arg(ap, unsigned int)));
}

int handle_decimal(va_list ap)
{
	return (put_d(va_arg(ap, int)));
}
