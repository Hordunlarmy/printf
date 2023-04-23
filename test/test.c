#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t = 'T';
	char name[] = "Tosin is a man";
	int r_value1, r_value2, r_value3, r_value4;

	printf("STANDARD LIBRARY FUNTION\n....................\n");
	r_value1 = printf("%%Tosin\n");
	printf("%c\n", t);
	r_value4 = printf("%s\n", name);
	printf("r value is %d\n", r_value1);
	printf("r value is %d\n\n", r_value4);

	printf("MY FUNTION\n....................\n");

	r_value2 = _printf("%%Tosin\n");
	_printf("%c\n", t);
	r_value3 = _printf("%s\n", name);
	printf("r value is %d\n", r_value2);
	printf("r value is %d\n", r_value3);

	put_c(t);
	put_c('\n');
	put_s(name);

	return (0);
}
