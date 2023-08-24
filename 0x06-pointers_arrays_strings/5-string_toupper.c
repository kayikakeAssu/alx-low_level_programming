#include "main.h"

/**
* string_toupper - it changes all lowercase letters to uppercase
* @p:string that will be modified
*
* Return: p
*/
char *string_toupper(char *p)
{
int a = 0;

while (p[a])
{
if (p[a] >= 97 && p[a] <= 122)
{
p[a] -= 32;
}

a++;
}

return (p);
}
