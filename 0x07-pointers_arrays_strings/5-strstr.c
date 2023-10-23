#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: the string
 * @needle: the substring
 * Return: a pointer to the beginning
 * of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int j = 0;
char *word;
while(*haystack){
if (haystack[j] == needle[0])
{
for(i=0; haystack[j + i] == needle[i]; i++){
word[i] = needle[i];
}
}
j++;
haystack++;
}
return ( word || NULL);
}