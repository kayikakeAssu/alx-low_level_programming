#include <stdio.h>
/**
* main - Prints the sum of Even Fibonacci numbers
* less than 4000000.
*
* Return: 0
*/
int main(void)
{
long fib1 = 1, fib2 = 2, temp;
long sum = 0;
while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
{
sum += fib2;
}
temp = fib2;
fib2 = fib1 + fib2;
fib1 = temp;
}
printf("%ld\n", sum);
return (0);
}
