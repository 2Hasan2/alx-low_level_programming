#include "main.h"

/**
*_putchar - writes the character c to stdout
*@c: The character to print
*Return: On success 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c: character to be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||
	    (c >= 65 && c <= 90))
		return (1);

	return (0);
}

/**
 * _abs - computes the absolute value of an integer
 * @n: integer to be computed
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);

	return (n);
}

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
		_putchar(*(str + i++));

	_putchar('\n');
}

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: destination of string to be copied
 * @src: source of string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = *(src + i);

	return (dest);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer converted from string
 */

int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while (*(s + i))
	{
		if (*(s + i) == '-')
			sign *= -1;

		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			while (*(s + i) >= 48 && *(s + i) <= 57)
			{
				num = num * 10 + sign * (*(s + i) - '0');
				i++;
			}

			break;
		}

		i++;
	}

	return (num);
}

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

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
		i++;

	return (*(s1 + i) - *(s2 + i));
}

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte to be filled
 * @n: number of bytes to be filled
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		*(s + i++) = b;

	return (s);
}

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

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string to be checked against
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i))
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				break;

			j++;
		}

		if (!*(accept + j))
			break;

		j = 0;
		i++;
	}

	return (i);
}

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
