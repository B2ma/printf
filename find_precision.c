#include "main.h"
/**
  * find_precision - calculates the presicion for printing
  * @format: formated string to print the arguments
  * @i: list of arguments to be printed
  * @list: list of arguments.
  * Return: precision
  */
int find_precision(const char *format, int *i, va_list list)
{
	int curr_i = *i + 1;
	int precision = -1;

	if (format[curr_i] != '.')
		return (precision);
	precision = 0;
	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
	if (is_digit(format[curri]))
	{
		precision *= 10;
		precision += format[curr_i] - '0';
	}
	else if (format[curr_i] == '*')
	{
		curr_i++;
		precision = va_arg(list, int);
		break;
	}
	else
	break;
	}
	*i = curr_i - 1;
	return (precision);
}
