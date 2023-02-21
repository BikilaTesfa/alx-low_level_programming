#include "main.h"
/**
 * _isalpha - returns 1 if the character is letter upper or lowercase else 0
 * Return: 1 if it's letter otherwise 0
 * @c: takes characters
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
