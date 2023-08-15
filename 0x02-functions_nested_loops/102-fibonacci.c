#include <stdio.h>
/**
* main - Prints the first 52 fibonacci numbers
*
* Return:0
*/
int main(void)
{
int i, j;
int fib[50];
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (j = 0; j < 49; j++)
{
printf("%d, ", fib[j]);
}
printf("%d\n", fib[49]);
return (0);
}
