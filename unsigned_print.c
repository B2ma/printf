#include "main.h"

/**
  * unsigned_print - prints unsigned integers
  * @ap: arguments to print
  * Return: number of characters to be printed
  */
int unsigned_print(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int numb, last = n % 10, digit;
	int i = 1;
	int exp = 1;

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
		while (num / 10 != 0)
		{
			exp = exp * 10;
			numb = numb / 10;
		}
		numb = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			numb = numb - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
