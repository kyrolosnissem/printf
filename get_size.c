#include "main.h"

/**
 * get_size - calculate the size of the conversion parameters
 * @format: format string for printing parameters
 * @i : list of parameters to print
 *
 * Return: precision
 */

int get_size(const char *format, int *i)
{
	int val_i = *i + 1;
	int size = 0;

	if (format[val_i] == '1')
		size = S_LONG;
	else if (format[val_i] == 'h')
		size = S_SHORT;
	if (size == 0)
		*i = val_i - 1;
	else
		*i = val_i
	return (size);
}
