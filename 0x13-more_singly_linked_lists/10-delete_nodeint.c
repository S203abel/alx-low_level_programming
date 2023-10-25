#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *prev_node = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((ind > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == ind)
		{
			old_node = *head;
			if (i == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			prev_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((i + 1) == ind)
			prev_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cur = h;
	size_t ct = 0;

	while (cur != NULL)
	{
		ct += 1;
		cur = cur->next;
	}
	return (ct);
}
