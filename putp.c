#include "main.h"

/**
 * put_p - Entry point
 * @ptr: pointer
 * Return: a memory address
 */
int put_p(void *ptr)
{
	char buffer[1024];
	size_t i, r;
	int r_value;

	r_value = snprintf(buffer, sizeof(buffer), "%p", ptr);
	if (r_value < 0 || (size_t)r_value >= sizeof(buffer))
	{
		return (-1);
	}

	for (i = 0; i < (size_t)r_value; i++)
	{
		r = putchar(buffer[i]);
		if (r < 0)
		{
			return (-1);
		}
	}

	return (r_value);
}
