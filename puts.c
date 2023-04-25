#include "main.h"

/**
 * put_s - Entry point
 * @string: pointer to string
 * Return: a string
 */
int put_s(char *string)
{
	int i, r_value = 0;

	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
	{
		r_value += put_c(string[i]);
	}

	return (r_value);

}


/**
 * handle_s_upper - Entry point
 * @ap: argument passed
 * Return: a custom string
 */
int handle_string_upper(va_list ap)
{
	int i, r_value = 0;
	char *string = va_arg(ap, char *);
	if (string == NULL)
	{
		return (put_s("(null)"));
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 32 && string[i] < 127)
		{
			r_value += put_c(string[i]);
		}
		else
		{
			r_value += put_s("\\x");
			r_value += put_x((unsigned char) string[i], 2, 'A');
		}
	}
	return (r_value);
}
