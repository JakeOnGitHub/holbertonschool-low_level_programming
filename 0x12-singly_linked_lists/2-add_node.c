#include "lists.h"
#include "_strlen.c"

/**
* add_node - add new node at the begining of the list
* @head: pointer to the current node head
* @str: string to copy
*
* Return: address of new element, or NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *cpyString;
	list_t *newNode;
	int length = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	return (NULL);

	cpyString = strdup(str);
	if (cpyString == NULL)
	{
		free(newNode);
		return (NULL);
	}

	length = _strlen(cpyString);
	newNode->str = cpyString;
	newNode->len = length;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
