#incude "main.h"

/**
 * strlen_print - Returns the length of a string
 * @s: the char pointer
 * Return: c
 */
int strlen_print(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;

	return (c);
}
