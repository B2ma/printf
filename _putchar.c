#include "main.h"

/**
 * print_buffer - prints the content of buffer
 * @buffer: array of characters
 * @buff_ind: index to add next char
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, buffer, *buff_ind);
	*buff_ind = 0;
}
/**
  * _putchar - writes the character c to stdout
  * @c: the character to print
  * Return: 1 on success
  */
int _putchar(char c)
{
	static char buffer[BUFF_SIZE];
	static int buffer_index;

	if (buffer_index == BUFF_SIZE)
	{
		print_buffer(buffer, &buffer_index);
	}
	buffer[buffer_index] = c;
	return (1);
}
