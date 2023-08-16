#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
* positive_or_negative - srand, checks wheter a given number is >,<or =0,
*                followed by a new line.
*@i: the number
* Return: Always 0.
*/
int positive_or_negative(int i)
{
printf("%d", i);
if (i > 0)
printf(" is positive\n");
else if (i == 0)
printf(" is zero\n");
else
printf(" is negative\n");
return (0);
}
#endif /* MAIN_H */
