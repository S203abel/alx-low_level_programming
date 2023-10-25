#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
listint_t *popp;
int cont;

if (*head == NULL)
return (0);

popp = *head;
cont = popp->n;
free(popp);

*head = (*head)->next;
return (cont);
}
