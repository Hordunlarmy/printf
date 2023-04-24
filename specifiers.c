#include "main.h"

/**
 * spec_handle - Entry point
 * @specifier: specifier
 * @ap: arguement parameter
 * Return: success
 */
typedef int (*put_func_t)(va_list ap);

int spec_handle(va_list ap, char specifier)
{
	static put_func_t dispatch_table[128] = { 0 };
	put_func_t func = dispatch_table[(int)specifier];

	if (!dispatch_table['%'])
	{
		dispatch_table['%'] = put_chr;
		dispatch_table['c'] = put_chr;
		dispatch_table['s'] = put_s;
		dispatch_table['b'] = put_b;
		dispatch_table['u'] = put_u;
		dispatch_table['o'] = put_o;
		dispatch_table['x'] = put_x;
		dispatch_table['X'] = put_X;
		dispatch_table['p'] = put_p;
		dispatch_table['d'] = put_d;
		dispatch_table['i'] = put_d;
	}

	if (!func)
	{
		put_c('%');
		put_c(specifier);
		return (2);
	}
	return (func(ap));
}
