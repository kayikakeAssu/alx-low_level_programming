#include "main.h"
/**
* print_diagonal - Draws a diagonal lines according parameter
* @n: The number of times to print diagonal lines
*
* Return: empty
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
