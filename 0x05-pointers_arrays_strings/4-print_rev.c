#include "main.h"
/**
* print_rev - Reverses a string
* @s: The string to be modified
*
* Return: void
*/
void print_rev(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

for (int i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
