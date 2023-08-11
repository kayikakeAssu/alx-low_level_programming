#include <stdio.h>
/**
 * main - Prints "a-z,A-Z",
 *                followed by a new line, to standard error.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
