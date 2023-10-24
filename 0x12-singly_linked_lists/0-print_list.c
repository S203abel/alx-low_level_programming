#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
const list_t *NodeCt = h;
size_t Ct = 0;

while (NodeCt != NULL)
{
if (NodeCt->str != NULL)
printf("[%d] %s\n", NodeCt->len, NodeCt->str);
else
printf("[0] (nil)\n");
Ct += 1;
NodeCt = NodeCt->next;
}

return (Ct);
}
