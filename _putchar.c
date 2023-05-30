#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the content of buffer
 * @buffer: array of characters
 * @buff_ind: index to add next char
 */

void _putchar(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, buffer, *buff_ind);
	*buff_ind = 0;
}
