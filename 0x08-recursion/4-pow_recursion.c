#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number
 * @y: power
 * Return: number
 */

int _pow_recursion(int x, int y)
{
if(y == 0)
return (1);
else if(y < 0)
return(-1);
else if(y  > 0){
int res = _pow_recursion(x , y - 1);
return (x * res);
}
}
