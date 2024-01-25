#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints a variable number of strings
 * @separator: string to be printed between the strings (
 * @n  Number of strings to be printed.
 * @...: The variable number of strings to be printed.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);
	printf("\n");
}
