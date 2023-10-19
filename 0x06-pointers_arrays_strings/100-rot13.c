#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: pointer to the encoded string
 */

char *rot13(char *s)
{
int i, j;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
i = 0;
while (s[i])
{
j = 0;
while (alpha[j])
{
if (s[i] == alpha[j])
{
s[i] = rot[j];
break;
}
j++;
}
i++;
}
return (s);
}
