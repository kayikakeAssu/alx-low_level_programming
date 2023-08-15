#include "main.h"
/**
* main - Prints "alphabets",
*                followed by a new line, to standard error.
*
* Return: Always 0.
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
