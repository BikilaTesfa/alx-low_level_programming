#include "main.h"
/**
 * _abs - is used to return absolute value values
 * Return: positive value for both positive; and 0 for zero
 *@i: integer to calculate abs
 */
int _abs(int i)
{
if (i < 0)
{
i = (-1 * i);
return (i);
}
else if (i > 0)
{
return (i);
}
else
{
return (0);
}
}
