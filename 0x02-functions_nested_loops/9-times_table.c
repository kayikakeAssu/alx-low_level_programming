#include "main.h"
/**
* times_table - Prints the 9 times table, starting with 0
*
* Return: void
*/
void times_table(void)
{
int row, column;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
int result = row * column;
if (result > 9)
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
if (column != 0)
_putchar(' ');
_putchar(result + '0');
}
if (column != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
