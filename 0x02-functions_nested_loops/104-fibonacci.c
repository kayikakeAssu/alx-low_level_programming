#include <stdio.h>
/**
* main - Prints the sum of Even Fibonacci numbers
* less than 4000000.
*
* Return: 0
*/
int main(void)
{
unsigned int fib1 = 1, fib2 = 2, temp;
int count;
printf("%u, %u", fib1, fib2);
for (count = 2; count < 98;
{
temp = fib2;
fib2 = fib1 + fib2;
fib1 = temp;
printf(", %u", fib2);
}
printf("\n");
return (0);
}
