#include "main.h"

/**
 * put_r - Main entry
 * @string: string to be reversed
 * Return: reversed string
 */
int put_r(char *string)
{
	int i;
	int r_value = 0;

	if (!string)
		string = "(null)";
	while (string[r_value] != '\0')
		r_value++;
	for (i = r_value - 1; i >= 0; i--)
		put_c(*(string + i));

	return (r_value);
}
