#include "lists.h"

/**
* insert_nodeint_at_index - inserts node at given index/list
* @head: head of list
* @idx: index to put node at
* @n: integer data for new node
* Return: pointer to new node at specified index, NULL if not found
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
