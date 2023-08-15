#include <stdio.h>
/**
* main - Prints the first 52 fibonacci numbers
*
* Return:0
*/
int main(void)
{
int i;
long long fib[50];
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (i = 0; i < 49; i++)
{
printf("%lld, ", fib[i]);
}
printf("%lld\n", fib[49]);
return (0);
}
