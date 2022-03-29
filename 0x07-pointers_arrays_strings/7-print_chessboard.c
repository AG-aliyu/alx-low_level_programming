#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int i = 0;
int n;
while (i < 8)
{
for (n = 0; n < 8; n++)
{
_putchar(a[i][n]);
_putchar('\n');
}
}
i++;
}
