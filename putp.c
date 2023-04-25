#include "main.h"

/**
 * put_p - Entry point
 * @ptr: pointer
 * Return: a memory address
 */
int put_p(void *ptr)
{
	char *string = "(nil)";
	long int hex;
	int i, r_value;

	if (ptr == NULL)
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			put_c(string[i]);
		}
		return (i);
	}

	hex = (unsigned long int)ptr;
	put_c('0');
	put_c('x');
	r_value = put_X(hex);

	return (r_value + 2);
}
