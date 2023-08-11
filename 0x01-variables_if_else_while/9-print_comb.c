#include <stdio.h>
/**
* main - Prints "possible combination",
*                followed by a new line, to standard error.
*
* Return: Always 1.
*/
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
