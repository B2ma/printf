#include "main.h"

/**
  * string_print - prints a string
  * @val: the arguments
  * Return: the length of the string
  */
int string_print(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char*);
	if (s == NULL)
	{
		s = "(null)";
		len = strlen_print(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = strlen_print(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
