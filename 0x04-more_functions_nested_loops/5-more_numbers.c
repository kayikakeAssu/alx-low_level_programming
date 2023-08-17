#include "main.h"
#include <stdio.h>
/**
* more_numbers - Print 10 times the numbers since 0 up to 14
*
* Return: void
*/

void more_numbers(void)
{
int i, j, num;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
num = j;
if (j >= 10)
{
_putchar('1');
num = j % 10;
}
_putchar(num + '0');
}
_putchar('\n');
}
}
