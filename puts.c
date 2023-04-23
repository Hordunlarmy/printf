#include "main.h"

/**
 * put_s - Entry point
 * @string: pointer to string
 * Return: a string
 */
int put_s(char *string)
{
	int i, r_value = 0;

	if (string)
		for (i = 0; string[i] != '\0'; i++)
		{
			put_c(string[i]);
			r_value++;
		}

	return (r_value);

}
