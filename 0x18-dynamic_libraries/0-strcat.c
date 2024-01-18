#include "main.h"


/**
 * _strcat - concatenates two strings
 * @dest: destination of string to be concatenated
 * @src: source of string to be concatenated
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}
