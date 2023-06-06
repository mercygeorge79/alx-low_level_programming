#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: A pointer to the head of the listint_t list.
* @idx: The index of the list where the new node should be added.
* @n: The integer to add to the listint_t list.
*
* Return: If it is not possible to add the new node at index idx, return NULL.
*         Otherwise - The address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;

if (head == NULL)
return (NULL);

if (idx == 0)
return (add_nodeint(head, n));

temp = *head;

while (idx > 1)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
idx--;
}

if (temp == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (temp->next != NULL)
new_node->next = temp->next;
else
new_node->next = NULL;

temp->next = new_node;

return (new_node);
}

