#include "main.h"
/**
* print_sign - Prints the sign of a number
* @n: The number to be checked
*
* Return: 1 if the num is  positive, -1 if negative and zero if anything else
*/
#include <stdio.h>
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
