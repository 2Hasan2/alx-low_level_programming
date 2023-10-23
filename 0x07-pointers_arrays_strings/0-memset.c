#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @n : number of bytes
 * @s : pointer to memory area
 * @b : constant byte
 * Return: pointer to memory area s
 */

char *_memset(char *s ,char b, unsigned int n)
{
unsigned int i;
for ( i = 0; i < n; i++)
{
s[i]=b;
};
return(0);
}
