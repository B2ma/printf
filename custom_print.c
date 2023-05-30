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
		{"%%", percentage_print},
		{"%i", int_print}, {"%d", dec_print},
		{"%r", srev_print}, {"%R", rot13_print}, {"%b", bin_print},
		{"%u", unsigned_print}, {"%o", oct_print}, {"%x", hex_print},
		{"%X", HEX_print}, {"%S", print_S}, {"%p", pointer_print}
	};
	va_list ap;
	int i = 0, j, len = 0;
	char buffer[BUFFER_SIZE];
	int buffer_index = 0;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j]. id[1] == format[i + 1])
			{
				len += m[j]. f(ap);
				i = i + 2;
			}
			j--;
		}
		if (buffer_index == BUFFER_SIZE)
		{
			write(1,buffer, BUFFER_SIZE);
			len+= BUFFER_SIZE;
			buffer_index = 0;
		}
		buffer[buffe_index ++] = format[i];
		len++
		i++;
	}
	write(1,buffer, buffer_index);
	len+= buffer_index;
	va_end(ap);
	return (len);
}
