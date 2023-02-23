#include "main.h"
/**
 * _isdigit - function to identify if it's digit or not
 * @c: print number
 * Return: 0 or 1
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
