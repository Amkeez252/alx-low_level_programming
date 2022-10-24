#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: free
 * Return: return listint
 */

size_t free_listint_safe(listint_t **h)
{
	size_t b = 0;
	listint_t *head, *temp;
	long diff;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		b++;
		diff = head->next - head;
		temp = head;
		free(temp);
		if (diff >= 0)
			break;
		head = head->next;
	}
	return (b);
}

