#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] && s2[i] && s1[i] == s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}
