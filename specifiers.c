#include "main.h"

/**
 * spec_handle - Entry point
 * @specifier: specifier
 * @ap: arguement parameter
 * Return: success
 */
int spec_handle(va_list ap, char specifier)
{
	unsigned int i;
	static const handler_t handlers[] = {
		{'%', handle_percent},
		{'c', handle_char},
		{'s', handle_string},
		{'b', handle_binary},
		{'u', handle_unsigned},
		{'o', handle_octal},
		{'d', handle_decimal},
		{'i', handle_decimal},
		{'x', handle_hex},
		{'X', handle_hex_upper},
	};

	for (i = 0; i < sizeof(handlers) / sizeof(handler_t); i++)
	{
		if (handlers[i].specifier == specifier)
		{
			return (handlers[i].func(ap));
		}
	}

	put_c('%');
	put_c(specifier);
	return (2);
}
