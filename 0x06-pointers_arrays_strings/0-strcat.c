#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: a pointer to a char that will be changed
 * @src: a pointer to a char that will also change
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i])
i++;
for (i = 0; src[j]; j++)
dest[i++] = src[j];
return (dest);
}
