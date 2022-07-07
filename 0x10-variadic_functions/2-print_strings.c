#include "variadic_functions.h"

/**
 * print_strings - prints strings from argument
 * @separator: input character separator
 * @n: input number of argumants
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char*);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
