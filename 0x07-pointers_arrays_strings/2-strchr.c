#include "main.h"
/**
 * _strchr - the first first occurrence of 
 * the character C in the string
 * @s: the string
 * @c:the character
 * Return: a pointer for the c character
 */

char *_strchr(char *s, char c)
{
    int i;
    for (i = 0; !((s[i]==c) && (s[i] == '\0')); i++){
        if (s[i] == c)
            return (s + i);
        else
            return (NULL);
    }
}
