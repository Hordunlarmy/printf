#include "main.h"

/**
 * _printf - Entry point
 * @format: pointer to string
 * Return: prints out anything
 */
int _printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);

	int i;

	int r_value = 0, sr_value = 0;
	
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			put_c(format[i]);
			r_value++;
		}

		else if (format[i + 1] == 'c')
		{
			put_c(va_arg(ap, int));
			r_value++;
			i++;
		}

		else if (format[i + 1] == 's')
		{
			sr_value = put_s(va_arg(ap, char *));
			r_value += sr_value;
			i++;
		}

		else if (format[i + 1] == '%')
		{
			put_c('%');
			r_value ++;
			i++;
		}

	}


	va_end(ap);

	return (r_value);
}
