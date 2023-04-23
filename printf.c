#include "main.h"

/**
 * _printf - Entry point
 * @format: pointer to string
 * Return: prints out anything
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	int r_value = 0, sr_value = 0;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			put_c(format[i]);
			r_value++;
		}

		else
		{
			if (format[i++] == '\0')
				return (-1);
			sr_value = spec_handle(ap, format[i + 1]);
			if (sr_value == -1)
				return (-1);
			r_value += sr_value;
			i++;
		}

	}
	va_end(ap);

	return (r_value);
}
