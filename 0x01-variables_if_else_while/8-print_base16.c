#include <stdio.h>
/**
* main - Prints "0-9",
*                followed by a new line, to standard error.
*
* Return: Always 1.
*/
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}
