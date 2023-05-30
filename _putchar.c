#include "main.h"
#include <unistd.h>

#define BUFFER_SIZE 1024
/**
  * _putchar - prints characters
  * @c: the character to be printed
  * Return: byte size
  */

int _putchar(char c)
{
	static char buffer[BUFFER_SIZE];
	static int buffer_index;
	int bytes_written = 0;

	buffer[buffer_index++] = c;
	if (buffer_index == BUFFER_SIZE)
	{
		bytes_written = write(1, buffer, BUFFER_SIZE);
		buffer_index = 0;
	}
	return (bytes_written > 0 ? 1 : -1);
}

