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
			r_value += put_x((unsigned int)string[i]);
		}
	}
	return (r_value);
}
