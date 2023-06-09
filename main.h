#ifndef MAIN_H
#define MAIN_H

/* all c standard function used */
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/* all prototypes of functions used declared here */
int _printf(const char *format, ...);
int put_c(char c);
int put_s(char *string);
int put_d(int n);
int put_b(int n);
int str_len(char *s);
int spec_handle(va_list ap, char specifier);
int put_u(unsigned int n);
int put_o(unsigned int n);
int put_x(unsigned int n);
int put_X(unsigned int n);
int put_S(char *string);
int put_p(void *ptr);
int put_r(char *string);
int put_R(char *string);
void flaG(void);
void lenghT(void);
void widtH(void);
void precisioN(void);


#endif /* MAIN_H */
