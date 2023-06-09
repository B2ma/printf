#include "main.h"
/**
  * _printf - produces output according to a format
  * @format: pointer to the format identifier
  * Return: the length of the string
  */
int _printf(const char *format, ...)
{
	conversion_specifier m[] = {
		{"%s", string_print}, {"%c", char_print},
		{"%%", percentage_print}, {"%i", int_print}, {"%d", dec_print},
		{"%r", srev_print}, {"%R", rot13_print}, {"%b", bin_print},
		{"%u", unsigned_print}, {"%o", oct_print}, {"%x", hex_print},
		{"%X", HEX_print}, {"%S", print_S}, {"%p", pointer_print}
	};
	va_list ap;
	int i = 0, j, len = 0;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
			while (j >= 0)
			{
				if (m[j].id[0] == format[i] && m[j]. id[1] == format[i + 1])
				{
					len += m[j].f(ap);
					i += 2;
					goto Here;
				}
				j--;
			}
			_putchar(format[i]);
			len++;
			i++;
		}
	va_end(ap);
	return (len);
}
