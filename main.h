#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);
int (*driver(char *format))(char *format, va_list);
int _puts(char *string);
int contadordigit(int number);
int _abs(int number);
int printpercent(char *format, va_list pa);
int printhex(char *format, va_list);
int printHEX(char *format, va_list);
int printocta(char *format, va_list);
int print_unsign(char *format, va_list);
int printstr(char *format, va_list);
int integer(int number);

/**
 * struct code_format - Struct format
 *
 * @sc: The specifiers
 * @f: The function associated
 */
typedef struct code_format

{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /* MAINH */
