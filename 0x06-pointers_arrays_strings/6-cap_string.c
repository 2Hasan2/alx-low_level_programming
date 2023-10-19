#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: pointer to the resulting string
 */

char *cap_string(char *s)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";
i = 0;
while (s[i])
{
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] -= 32;
}
j = 0;
while (sep[j])
{
if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= 32;
}
j++;
}
i++;
}
return (s);
}
