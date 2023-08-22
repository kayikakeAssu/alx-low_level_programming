#include "main.h"
#include <stdio.h>
/**
* print_rev - Reverses a string
* @s: The string to be modified
*
* Return: void
*/
void print_rev(char *s)
{
int length, i;

while (s[length] != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
