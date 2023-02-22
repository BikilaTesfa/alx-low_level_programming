#include "main.h"
/**
 * print_last_digit - this code print the last digit of an integer
 * Return: 0 success
 * @i: integer to print the last digit of it
 */
int print_last_digit(int i)
{
int ld = i % 10;
if (i < 0)
{
ld *= -1;
}
_putchar(ld + '0');
return (ld);
}
