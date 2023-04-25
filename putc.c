#include <unistd.h>

/**
 *  put_c - Entry point
 *  @c: charater to
 *  Return: character
 */
int put_c(char c)
{
	return (write(1, &c, 1));
}
