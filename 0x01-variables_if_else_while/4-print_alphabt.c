#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char alphaletters;

for (alphaletters = 'a'; alphaletters <= 'z'; alphaletters++)
{
if ((alphaletters == 'q') && (alphaletters == 'e'))
continue:
putchar(alphaletters);
}
putchar ('\n');

return (0);
}
