#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of memory area to be copied
 * @src: source of memory area to be copied
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && (*(dest + i) = *(src + i)))
		i++;

	return (dest);
}
