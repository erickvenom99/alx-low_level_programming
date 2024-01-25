#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers-Prints a variable number of integers
 * @separator :  string to be printed
 * @n:       number of integers to be printed.
 * @ ...:       The variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		printf("%d", number);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);
	printf("\n");
}
