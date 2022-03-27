#include "main.h"
/**
 * _strncpy -coping a string
 * @dest: A pointer to a character to be changed
 * @src: A pointer to a character to be changed
 * @co: input number of char
 * Return:@dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, co;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (co = 0; co < n; co++)
{
dest[i + co] = src[co];
if (src[co] == '\0')
co = n;
}
return (dest);
}
