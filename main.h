#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

#define BUFF_SIZE 1024

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1
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
int find_size(const char *format, int *i);
int find_flags(const char *format, int *i);
int find_width(const char *format, int *i, va_list list);
int find_precision(const char *format, int *i, va_list list);
long int convert_size_number(long int nummb, int size);
long int convert_size_unsgnd(unsigned long int nummb, int size);

#endif
