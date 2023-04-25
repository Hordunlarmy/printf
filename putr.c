#include "main.h"

/**
 * put_r - Main entry
 * @string: string to be reversed
 * Return: reversed string
 */
int put_r(char *string)
{
	int i, r_value = 0;

	if (string == NULL)
		string = "(null)";
	else
	{
		for (i = str_len(string) - 1; i >= 0; i--)
			r_value += put_c(string[i]);
	}
	return (r_value);
}

/**
* str_len - get the len of the string
* @s: the string
* Return: lenght of string
*/
int str_len(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
