#include <unistd.h>

/**
 *  put_c - Entry point
 *  @c: charater to stdout
 *  Return: character
 */
int put_c(char c)
{
	return (write(1, &c, 1));
}
