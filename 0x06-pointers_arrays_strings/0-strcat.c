#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A Pointer to a character that will be changed
 *@src: A Pointer to a character that will also be changed
 *Rturn: dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
whilw (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest)
}
