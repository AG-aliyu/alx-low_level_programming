#include "main.h"

/**
 * _puts_recursion - A function
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
while (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
