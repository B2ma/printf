#include "main.h"

/**
  * int_print - prints integers
  * @ap: arguments to print
  * Return: number of characters to be printed
  */
int int_print(va_list ap)
{
	int n = va_arg(ap, int);
	int numb, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	numb = n;
	if (last < 0)
	{
		_putchar('-');
		numb = -numb;
		n = -n;
		last = -last;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp = exp * 10;
			numb = numb / 10;
		}
		numb = n;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb = numb - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
