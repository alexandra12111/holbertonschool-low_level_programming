#include "lists.h"

/**
 * add_node - add node i suppose
 * @head: head of list
 * @str: string of text
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *alex;
size_t ale;
alex = malloc(sizeof(list_t));
if (alex == NULL)
return (NULL);
alex->str = strdup(str);
if (alex->str == NULL)
{
free(alex)
return (NULL);
}
for (ale = 0; str[ale]; ale++)
{
}
alex->len = ale;
alex->next = *head;
*head = alex;
return (*head);
}
