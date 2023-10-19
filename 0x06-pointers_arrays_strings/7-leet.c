#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: pointer to the resulting string
 */

char *leet(char *s)
{
int i, j;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
char num[8] = {'0', '1', '2', '3', '4', '5', '6', '7'};
i = 0;
while (s[i])
{
j = 0;
while (j < 8)
{
if (s[i] == leet[j] || s[i] - 32 == leet[j])
{
s[i] = num[j];
}
j++;
}
i++;
}
return (s);
}
