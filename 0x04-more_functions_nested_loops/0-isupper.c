#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase char.
 *
 * Return: 1 if c is uppercase , 0 otherwise.
 */

int _isupper(int c){
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}