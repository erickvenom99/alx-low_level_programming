#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings up to n characters.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * Return: Pointer to the concatenated string.
 *         If memory allocation fails or if s1 or s2 is NULL, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length1++;
	for (i = 0; s2[i] != '\0'; i++)
		length2++;
	if (n >= length2)
		n = length2;
	arr = malloc((length1 + n + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		arr[i] = s1[i];

	for (j = 0; j < n; j++)
		arr[i + j] = s2[j];
	arr[i + j] = '\0';
	return (arr);
}
