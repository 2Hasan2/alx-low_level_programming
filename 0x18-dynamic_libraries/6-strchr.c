#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be located
 * Return: pointer to first occurrence of c in s,
 * or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*(s++))
		if (*(s - 1) == c)
			return (s - 1);

	return (NULL);
}
