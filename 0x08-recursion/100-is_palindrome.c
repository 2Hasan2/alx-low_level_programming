#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if @s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = 0;
int i = 0;
int j = 0;
while (s[i++])
len++;
j = len - 1;
return (palindromeME(s, i, j));
}
/**
 * palindromeME - checks if a string is a palindrome
 * @s: string to check
 * @i: index
 * @j: index
 * Return: 1 if @s is a palindrome, 0 otherwise
 */
int palindromeME(char *s, int i, int j)
{
if (i >= j)
return (1);
else if (s[i] != s[j])
return (0);
return (palindromeME(s, i + 1, j - 1));
}
