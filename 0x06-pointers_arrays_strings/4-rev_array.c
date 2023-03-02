#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: pointer to int array
 * @n: is the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int tmp, s, e;
s = 0;
e = n - 1;
while (s < e)
{
tmp = a[s];
a[s] = a[e];
a[e] = tmp;
s++;
e--;
}
}
