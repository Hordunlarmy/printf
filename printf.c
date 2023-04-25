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
			r_value += put_c(format[i]);

		else
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '%' || format[i + 1] == 'c' ||
					format[i + 1] == 's' || format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				sr_value = spec_handle1(ap, format[i + 1]);
				if (sr_value == -1)
					return (-1);
			}
			else if (format[i + 1] == 'b' || format[i + 1] == 'u' ||
					format[i + 1] == 'o' || format[i + 1] == 'x' || format[i + 1] == 'X')
			{
				sr_value = spec_handle2(ap, format[i + 1]);
				if (sr_value == -1)
					return (-1);
			}
			r_value += sr_value;
			i++;
		}

	}
	va_end(ap);

	return (r_value);
}
