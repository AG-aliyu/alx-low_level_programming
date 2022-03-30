#include "main.h"

int lengthc(char *s);
int palindrome(char sr[], int x, int y);
/**
 * is_palindrome - function returns 1 if a string is a palindrome and 0 if not
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
int len;
len = lengthc(s);
if (len == 0)
return (1);
return (palindrome(s, 0, len - 1));
}

/**
 * lengthc - finds the length count
 * @s: input
 * Return: length size
 */
int lengthc(char *s)
{
if (*s != '\0')
return (1 + lengthc(s + 1));
return (0);
}

/**
 * palindrome - To checks if start and end of string match
 * @sr: string
 * @x: starting of string 0
 * @y: ending of string from is_palindrome, from lengthc
 * Return: if sr is a palindrome
 */
int palindrome(char sr[], int x, int y)
{
if (x >= y)
return (1);
if (sr[st] != sr[y])
return (0);
if (x <= y || x < y + 1)
return (palindrome(sr, x + 1, y - 1));
return (1);
}
