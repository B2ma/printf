#include "main.h"
/**
  * find_width - Finds the width for printing
  * @format: formated string to print the argumens
  * @i: what to print
  * @list:list of arguments
  * Return: width
  */
int find_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (isdigit(format[curr_i]))
		{
			width *= 10;
			width *= format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = curr_i - 1;
	return (width);
}
