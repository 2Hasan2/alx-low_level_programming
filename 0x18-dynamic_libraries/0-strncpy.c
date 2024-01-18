#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination of string to be copied
 * @src: source of string to be copied
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && (*(dest + i) = *(src + i)))
		i++;

	while (i < n)
		*(dest + i++) = '\0';

	return (dest);
}
