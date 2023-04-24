#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int put_c(char c);
int put_chr(va_list ap);
int put_s(va_list ap);
int put_d(va_list ap);
int put_b(va_list ap);
int put_u(va_list ap);
int put_o(va_list ap);
int put_x(va_list ap);
int put_X(va_list ap);
int put_p(va_list ap);
int spec_handle(va_list ap, char specifier);



#endif /* MAIN_H */
