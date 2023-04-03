#include <stdio.h>
#include "lists.h"
/**
 * listint_len - is a function used to print all elements
 * @h: listint_t type of node struct
 * Return: Always successful
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
