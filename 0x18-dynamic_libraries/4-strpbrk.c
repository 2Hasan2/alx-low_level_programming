#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string to be searched against
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*(s++))
		if (_strchr(accept, *(s - 1)))
			return (s - 1);

	return (NULL);
}
