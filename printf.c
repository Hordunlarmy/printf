#include "main.h"

/**
 * _printf - Entry point
 * @format: pointer to string
 * Return: prints out anything
 */
int _printf(const char *format, ...)
{
	int i;
	int r_value = 0, sr_value = 0;
	va_list ap;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			put_c(format[i]);
		}

		else if (format[i + 1] == 'c')
		{
			put_c(va_arg(ap, int));
			i++;
		}

		else if (format[i] == '%' && format[i + 1] == 's')
		{
			sr_value = put_s(va_arg(ap, char *));
			i++;
			r_value += (sr_value - 1);
		}

		else if (format[i] == '%' && format[i + 1] == '%')
		{
			put_c('%');
			i++;
		}
		r_value++;
	}

	va_end(ap);

	return (r_value);
}
