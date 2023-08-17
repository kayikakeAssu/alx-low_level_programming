#include "main.h"
/**
* print_most_numbers - Print the numbers since 0 up to 9
*
* Description: Prints the numbers excluding 2 and 4
*
* Return: void
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
