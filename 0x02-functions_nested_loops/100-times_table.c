#include "main.h"
/**
* print_times_table - Prints a multiplication table up to param
* @n: the number to be treated
*
* Return: numbers
*/
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i = 0;
for (; i <= n; i++)
{
int j = 0;
for (; j <= n; j++)
{
int result = i * j;
if (j > 0)
{
_putchar(' ');
}
if (result < 10)
{
if (j > 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(result + '0');
}
else if (result < 100)
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
_putchar((result / 100) + '0');
_putchar(((result / 10) % 10) + '0');
_putchar((result % 10) + '0');
}
if (j != n)
{
_putchar(',');
}
}
_putchar('\n');
}
}
}
