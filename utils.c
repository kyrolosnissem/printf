#include "main.h"

/**
 * is_printable - Determines if a character can be printed
 * @b: Char has to be assessed.
 *
 * Return: 0 if c cannot be printed, 1 if it can.
 */
int is_printable(char b)
{
	if (b >= 32 && b < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascci to the buffer in hexadecimal code.
 * @buffer: Character array
 * @i: Index to begin appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Checks if a character is digit
 * @b: Char will be assessed
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char b)
{
	if (b >= '0' && b <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number: This function converts a number to a given size
 * @num: The casting number
 * @size: The type to be cast, indicated by a number.
 *
 * Return: The num's cast value
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
