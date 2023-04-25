#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

typedef int (*put_func_t)(va_list);

typedef struct
{
	char specifier;
	put_func_t func;
} handler_t;

int _printf(const char *format, ...);
int put_c(char c);
int put_s(char *string);
int put_d(int n);
int put_b(int n);
int spec_handle(va_list ap, char specifier);
int put_u(unsigned int n);
int put_o(unsigned int n);
int put_x(unsigned int n);
int put_X(unsigned int n);
int put_p(void *ptr);

int handle_percent(va_list ap);
int handle_char(va_list ap);
int handle_string(va_list ap);
int handle_binary(va_list ap);
int handle_unsigned(va_list ap);
int handle_octal(va_list ap);
int handle_hex(va_list ap);
int handle_hex_upper(va_list ap);
int handle_decimal(va_list ap);

#endif /* MAIN_H */
