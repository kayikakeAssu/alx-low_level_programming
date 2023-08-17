#include "main.h"
/**
* print_square - Draws a square lines according parameter
* @size: The number of times to print sqr lines
*
* Return: empty
*/
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}

for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
