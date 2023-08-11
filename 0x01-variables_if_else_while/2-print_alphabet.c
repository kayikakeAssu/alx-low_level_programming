#include <stdio.h>
/**
* main - Prints char from a to z,
*                followed by a new line, to standard error.
*
* Return: 0.
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
