#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 *
 *@dest: pointer to the buffer in which we copy the string
 *@src: string to be copied
 *Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
