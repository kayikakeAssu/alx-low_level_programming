#include <stdio.h>
/**
 * main - Prints "a-z,A-Z",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
