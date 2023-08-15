#include <stdio.h>
/**
* main - Prints the sum of all multiples of 3 or 5 up to 1024
*
* Return: 0 (Success)
*/
int main(void)
{
int number;
int total_sum = 0;
for (number = 1; number < 1024; number++)
{
if (number % 3 == 0 || number % 5 == 0)
{
total_sum += number;
}
}
printf("%d\n", total_sum);
return (0);
}
