#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination of string to be concatenated
 * @src: source of string to be concatenated
 * @n: number of bytes to be concatenated
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while (j < n && (*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}
