#include "main.h"

/**
 * get_width - determine the printing width
 * @format: format string for printing parameters
 * @i: list of parameter to print
 *
 * Return: width
 */

int get_width(const char *format, int *i, va_list list)
{
	int val_i;
	int width = 0;

	for (val_i = *i + 1; format[val_i] != '\0'; val_i++)

		if (is_digit(format[val_i]))
		{
			width *= 10;
			width += format[val_i] - '0';
		}
		else if (format[val_i] == '*')
		{
			val_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	*i = val_i - 1;
	return (width);
}
