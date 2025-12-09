#include "lists.h"

/**
 * free_list - frees the list 
 * @head: list
 */

void free_list(list_t *head)
{
list_t *nah;
while (head != NULL)
{
nah = head->next;
free(head->str);
free(head);
head = nah;
}
}
