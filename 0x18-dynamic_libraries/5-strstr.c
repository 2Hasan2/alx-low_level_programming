#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: pointer to the beginning of the located substring,
 * or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*(haystack + i))
	{
		while (*(needle + j))
		{
			if (*(haystack + i + j) != *(needle + j))
				break;

			j++;
		}

		if (!*(needle + j))
			return (haystack + i);

		j = 0;
		i++;
	}

	return (NULL);
}
