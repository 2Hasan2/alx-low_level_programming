#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 * Return: pointer to new string, NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1, len2;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = len(s1);
len2 = len(s2);
if (n >= len2)
n = len2;
str = malloc(sizeof(char) * (len1 + n + 1));
if (str == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j < n; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}
