#include "main.h"

/**
 * put_s - Entry point
 * @string: pointer to string
 * Return: a string
 */
int put_s(char *string)
{
	int i, r_value = 0;

	if (!string)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
	{
		put_c(string[i]);
		r_value++;
	}

	return (r_value);

}

/**
 * put_S - Entry point
 * @string: argument passed
 * Return: a custom string
 */
int put_S(char *string)
{
	int i, r_value = 0;
	int c;

	if (string == NULL)
		string = "(null)";
	for (i = 0; *(string + i) != '\0'; i++)
	{
		if (*(string + i) < 32 || *(string + i) >= 127)
		{
			put_c('\\');
			put_c('x');
			r_value = r_value + 2;
			c = *(string + i);
			if (c < 16)
				r_value += put_c('0');

			r_value = r_value + put_X(c);
		}
		else
			r_value += *(string + i);
	}
	return (r_value);
}
