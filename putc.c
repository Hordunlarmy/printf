#include <unistd.h>

/**
 *  put_c - Entry point
 *  @c: charater
 *  Return: character
 */
int put_c(char c)
{
	int output;

	output = (write(1, &c, 1));
	return (output);
}
