#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int c_i = *i + 1;
	int gsize = 0;

	if (format[c_i] == 'l')
		gsize = S_LONG;
	else if (format[c_i] == 'h')
		gsize = S_SHORT;

	if (gsize == 0)
		*i = c_i - 1;
	else
		*i = c_i;

	return (gsize);
}
