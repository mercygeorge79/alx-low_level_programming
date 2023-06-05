#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the listint_t list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *loop_node;

loop_node = find_listint_loop((listint_t *)head);

if (loop_node == NULL)
{
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
}
}
else
{
while (head != loop_node)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
}

printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
count++;
}

return (count);
}


