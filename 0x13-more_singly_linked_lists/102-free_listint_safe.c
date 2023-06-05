#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: A pointer to the head of the listint_t list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *temp;

if (h == NULL || *h == NULL)
return (0);

while (*h != NULL)
{
temp = (*h)->next;

free(*h);
count++;

if (*h <= temp)
break;

*h = temp;
}

*h = NULL;

return (count);
}

