#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to chat
 * @to: the original pointer
 *
 * Return: always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
