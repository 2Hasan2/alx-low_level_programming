#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a : parameter
 * @b : parameter
 * Return : nothing
 * */ 

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
