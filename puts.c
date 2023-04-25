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
