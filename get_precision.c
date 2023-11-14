#include "main.h"

/**
 * get_precision - determine the printing precision
 * @format: format string for parameter that prints
 * @i:list of parameter to print
 * @list: list of parameter
 *
 * Return: precision
 */

int get_precision(const char *format, int *i, va_list list)
{
	int val_i = *i + 1;
	int precision = -1;

	if (format[val_i] != '.')
		return (precision);
	precision = 0;

	for (val_i += 1; format[val_i] != '\0'; val_i++)
	{
		if (is_digit(format[val_i]))
		{
		precision *= 10;
		precision += format[val_i] - '0';
		}
		else if (format[val_i] == '*')
		{
			val_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;

	}
	*i = val_i - 1;

	return (precision);
}
