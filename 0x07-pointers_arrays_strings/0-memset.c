#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: destination
 * @b: the constant byte
 * @n: the byte
 * Return: Always 0 (Success).
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}