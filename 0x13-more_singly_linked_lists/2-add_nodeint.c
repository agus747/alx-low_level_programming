#include "lists.h"
#include <stddef.h>

/**
 * *add_nodeint - function that adds a new node at the beginning of a
 * singly linked list
 * @head: double pointer to the singly linked list
 * @n: number to add to the singly linked list
 * Return: address to the new element(pointer) or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
