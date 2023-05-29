#include "main.h"

/**
  * print_S - prints exclusive strings
  * @val: the arguments
  * Return: the string length
  */
int print_S(va_list val)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + HEX_aux_print(cast);
		}
		else
		{
			_putchat(s[i]);
			len++;
		}
	}
	return (len);
}
