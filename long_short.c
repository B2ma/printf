#include "main.h"

/**
 * convert_size_number - casts a number to the specified size
 * @numb: number to be casted
 * @size: number indicating the type to be casted
 * Return: casted value of numb
 */
long int convert_size_number(long int numb, int size)
{
	if (size == S_LONG)
		return (numb);
	else if (size == S_SHORT)
		return ((short)numb);
	return ((int)num);
}

/**
 *  convert_size_unsgnd - casts a number to the specified size
 *  @numb: number to be casted
 *  @size: number indicating the type to be casted
 *  Return: casted value of numb
 */
long int convert_size_unsgnd(unsigned long int numb, int size)
{
	if (size == S_LONG)
		return (numb);
	if (size == S_SHORT)
		return ((unsigned short)numb);
	return ((unsigned short)numb);
}
