#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase char.
 *@c: tested character
 * return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c){
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}
