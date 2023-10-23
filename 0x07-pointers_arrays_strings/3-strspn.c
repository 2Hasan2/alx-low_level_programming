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
unsigned int bytes=0;
int i;
while (*s)
{
for(i = 0; accept[i]; i++)
{
if(accept[i+1] == '\0') return (bytes);
if(accept[i] == *s){
bytes++;
break;
}
}
s++;
}
}
