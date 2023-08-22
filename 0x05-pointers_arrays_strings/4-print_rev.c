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
int l = 0;

while (s[l] != '\0')
{
l++;
}

for (l -=1; l >= 0; l--)
{
_putchar(s[l]);
}

_putchar('\n');
}
