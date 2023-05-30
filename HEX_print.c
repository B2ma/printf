#include "main.h"

/**
  * HEX_print - prints an hexgecimal number
  * @val: the arguments
  * Return: the counter
  */
int HEX_print(va_list, val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int numb = va_arg(va_list, unsigned int);
	unsigned int temp = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
