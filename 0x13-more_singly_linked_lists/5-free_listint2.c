#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - function that frees a singly linked list
 * @head: pointer to the head of a singly linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (*head == NULL)
		return;
	node = *head;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}
