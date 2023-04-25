#include "main.h"

/**
 * put_p - Entry point
 * @ptr: pointer
 * Return: a memory address
 */
int put_p(void *ptr)
{
	char buffer[1024];
	int i, r_value = 0;

	sprintf(buffer, "%p", ptr);

	for (i = 0; buffer[i] != '\0'; i++)
		r_value = put_c(buffer[i]);

	return (r_value);

}
