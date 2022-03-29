#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - square matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int i = 0, n, total1 = 0, total2 = 0;
while (i <= (size * size)
{
total1 = total1 + a[i];
i = i + size + 1;
}
for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
{
total2 = total2 + a[n];
}
printf("%d, %d\n", total1, total2);
}
