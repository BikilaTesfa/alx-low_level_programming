#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that is going to print all the elements
 * @h: listint_t type of node struct
 * Return: Always successful
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
