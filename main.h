#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int put_c(char c);
int put_s(char *string);
int put_d(int n);
int spec_handle(va_list ap, char specifier);


#endif /* MAIN_H */