#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - srand, checks wheter a given random number is >,<or =0,
 *                followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d", n);
if (n > 0)
printf(" is positive\n");
else if (n == 0)
printf(" is zero\n");
else
printf(" is negative\n");
return (0);
}
