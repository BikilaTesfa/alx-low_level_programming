#include "main.h"
/**
 * print_sign - will print sign according to the if statment
 * @n: the number the sign to be printed
 * Return: 1 if th enumber is positve, 0 if zero and negative if it's negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
