#include "main.h"

/**
 * put_R - Entry point
 * @string: a string
 * Return: the rot13'ed string
 */
int put_R(char *string)
{
	int i, j, r_value = 0;
	int k = 0;
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (string[i] == alpha[j])
			{
				r_value += put_c(beta[j]);
				k = 1;
			}
		}
		if (!k)
			r_value += put_c(string[i]);
	}

	return (r_value);
}
