#include "main.h"

/**
 * sqrt_check - checks for the square root of x
 * @y:guess at sqrt
 * @x: number to find sqrt of
 *
 * Return: -1 or sqrt of x
 */
int sqrt_check(int y, int x)
{
if (y * y == x)
return (y);
if (y * y > x)
return (-1);
return (sqrt_check(y + 1, x));
}
/**
 * _sqrt_recursion - function square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (sqrt_check(1, n));
}
