#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 10;
	char t = 'T';
	char name[] = "Tosin is a man";
	int r_value1, r_value2, r_value3, r_value4;

	printf("STANDARD LIBRARY FUNTION\n....................\n");
	r_value1 = printf("%%Tosin\n");
	printf("%c\n", t);
	r_value4 = printf("%s\n", name);
	printf("r value is %d\n", r_value1);
	printf("r value is %d\n", r_value4);
	printf("number is %i\n\n", num);

	printf("MY FUNTION\n....................\n");

	r_value2 = _printf("%%Tosin\n");
	_printf("%c\n", t);
	r_value3 = _printf("%s\n", name);
	_printf("r value is %d\n", r_value2);
	_printf("r value is %d\n", r_value3);
	_printf("number is %i\n%t\n", num);

	put_c(t);
	put_c('\n');

	return (0);
}
