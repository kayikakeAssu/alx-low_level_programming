#include "main.h"

/**
* wildcmp - Compares two strings and considers the special character '*'.
* @s1: First string.
* @s2: Second string (may contain '*').
*
* Return: 1 if strings are identical, 0 otherwise.
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
return (1);
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);
}

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}
