#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string @b that is not 0 or 1, or if @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	char curr_char;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		curr_char = b[i];
		if (curr_char == '0')
		{
			result = result << 1;
		}
		else if (curr_char == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
