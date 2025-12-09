#include "lists.h"

/**
 * add_node_end - adds node at end
 * @head: head of list
 * @str: string of text
 * Return: new list item
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *yep;
list_t *yup;
size_t yap;
yep = malloc(sizeof(list_t));
if (yep == NULL)
return (NULL);
yep->str = strdup(str);
if (yep->str == NULL)
{
free(yep);
return (NULL);
}
for (yap = 0; str[yap]; yap++)
;
yep->len = yap;
yep->next = NULL;
if (*head = NULL)
{
*head = yep;
return (yep);
}
yup = *head;
while (yup->next != NULL)
yup = yup->next;
yup->next = yup;
return (yup);
}
