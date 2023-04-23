#include "main.h"

int spec_handle(char specifier, va_list ap)
{
	switch (specifier)
	{
		case 'c':
			put_c(va_arg(ap, int));
			break;
		case 's':
			put_s(va_arg(ap, char *));
			break;
		case 'd':
		case 'i':
			put_d(va_arg(ap, int));
			break;
		default:
			put_s("Error");
	}
}
