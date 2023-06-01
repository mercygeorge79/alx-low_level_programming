#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	char *str_dup;
	unsigned int len = 0;

	/* Calculate the length of the string */

	while (str && str[len])
		len++;

	/* Allocate memory for the new node */

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)

		return (NULL);

	/* Duplicate the string */

	str_dup = strdup(str);

	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Assign values to the new node */
	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head;

	/* Update the head pointer */
	*head = new_node;

	return (new_node);
}
