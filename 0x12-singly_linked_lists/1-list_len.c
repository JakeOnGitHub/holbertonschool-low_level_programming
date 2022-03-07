#include "lists.h"


/**
* list_len - prints lengthof list_t list.
* @h: function pointer
* Return: length of list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h++;
		h = h->next;
	}
	return (count);
}
