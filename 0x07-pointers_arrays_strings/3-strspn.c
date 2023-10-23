#include "main.h"
/**
 * strspn - function that gets the length of a prefix substring.
 * @s: the string
 * @accept: the accept characters
 * Returns: the number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
while (*s && strchr(accept, *s++))
{
bytes++;
}
return bytes;
}
