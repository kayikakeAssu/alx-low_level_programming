#include "main.h"
#include <stdio.h>
/**
* puts2 - Prints every other character of a string
* @str: The string to be treated
*
* Return: void
*/
void puts2(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}

for (i = 0; i < length; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
