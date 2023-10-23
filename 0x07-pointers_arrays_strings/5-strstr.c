#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: the string
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle) {
while (*haystack) {
int i = 0;
char *word = haystack;
while (haystack[i] == needle[i] && needle[i] != '\0') {
i++;
}
if (needle[i] == '\0') {
return (word);
}
haystack++;
}
return (NULL);
}
