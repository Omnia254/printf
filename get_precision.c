#include "main.h"

/**
 * get_accuracy - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: accuracy.
 */
int get_accuracy(const char *format, int *i, va_list list)
{
	int curent_i = *i + 1;
	int accuracy = -1;

	if (format[curent_i] != '.')
		return (accuracy);

	accuracy = 0;

	for (curent_i += 1; format[curent_i] != '\0'; curent_i++)
	{
		if (is_digit(format[curent_i]))
		{ 
			accuracy *= 10;
			accuracy += format[curent_i] - '0';
		}
		else if (format[curent_i] == '*')
		{
			curent_i++;
			accuracy = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curent_i - 1;

	return (accuracy);
}
