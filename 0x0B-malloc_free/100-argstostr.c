#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all arguments into a single string
 * @ac: argument count
 * @av: arguments in command line
 * Return: concatenated string or NULL
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i;
	int arg_length;
	int curr_index = 0;
	char *arg;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		arg_length = 0;
		while (*arg != '\0')
		{
			arg++;
			arg_length++;
		}
		total_length += arg_length;
	}
	arr = (char *)malloc((total_length + ac - 1) * sizeof(char) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			arr[curr_index++] = *arg++;
		}
		if (i < ac - 1)
		{
		arr[curr_index++] = '\n';
		}
	}
	arr[curr_index] = '\0';
	return (arr);
}
