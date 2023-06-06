#include <stdio.h>
#include "lists.h"

/**
* print_listint - Prints all the elements of a listint_t list.
* @h: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;

FILE *stream = stdout;

while (h != NULL)
{
count++;
fprintf(stream, "%d\n", h->n);
h = h->next;
}

return (count);
}

