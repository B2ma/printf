#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: the char pointer of the specifier i. e (l, h) for d, i, u, o, x, X)
 * @f: the type pointer to function for the conversion specifier
 */

typedef struct format
{
	char *id;
	int (*f)();
} conversion_specifier;

int _printf(const char *format, ...);
int int_print(va_list ap);
int bin_print(va_list val);
int char_print(va_list val);
int string_print(va_list val);
int percentage_print(void);
int dec_print(va_list ap);
int srev_print(va_list ap);
int rot13_print(va_list ap);
int unsigned_print(va_list ap);
int oct_print(va_list val);
int hex_print(va_list val);
int HEX_print(va_list val);
int print_S(va_list val);
int pointer_print(va_list val);
int _putchar(char c);
int strlen_print(char *s);
int hex_aux_print(unsigned long int num);
int HEX_aux_print(unsigned int num);

#endif
