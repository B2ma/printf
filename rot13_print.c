#include "main.h"

/**
 * rot13_print - prints string to ROT13 place into buffer
 * @ap: type struct va_arg where is allocated printf arguments
 * Return: counter
 */
int rot13_print(va_list ap)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(ap, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZabcdefghijklm"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
