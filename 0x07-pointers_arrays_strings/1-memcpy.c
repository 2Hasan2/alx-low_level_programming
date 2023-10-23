# include "main.h"
/**
 * _memcpy - copy bytes from memory area
 * to another one
 * @src : copy from it
 * @dest : paste in it
 * @n : number of bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n)
{
dest[n-1] = src[n-1];
n - 1;
}
return (dest);
}
