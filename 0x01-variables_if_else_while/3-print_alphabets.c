#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char uppercase;
char lowercase;

for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}



putchar ('\n');

return (0);
}
