#include "main.h"

/**
 * _print_rev_recursion - A function
 * @s: input
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion("\n"s + 1);
}
else
{
return;
_putchar(*s);
}
}