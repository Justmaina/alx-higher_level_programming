#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


listint_t *reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

/**
 * reverse_listint - reverse a singly linked list
 * @head: Pointer to the first node of a singly linked list
 * Return: A pointer to the head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head, *next, *prev = NULL;

	while (node)
	{
		next = node->next; /* store the next node in the current node */
		node->next = prev; /* change the next pointer of curr node to point to the prev node */
		prev = node; /* move the prev pointer forward to the current node */
		node = next; /* move the 'node' pointer forward to the next node stored */
	}
	*head = prev;
	return (*head);
}



/**
 * is_palindrome - Checks whether a singly linked list is a palindrome
 * @head: pointer of the first node of listint_t list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *tmp, *rev, *mid;
	size_t size = 0, i;

	if (*head == NULL || (*head)->next == NULL)
		return (1); /* to mean its a  palindrome even if its empty */
	tmp = *head;
	while (temp)
	{
		size++;
		tmp = tmp->next;
	}
	tmp = *head;
	for (i = 0; i < (size/2) - 1; i++) /* to find the first half of the palindrome */
		tmp = tmp->next;
	if ((size % 2) == 0 && tmp->n != tmp->next->n)
		return (0);
	tmp = tmp->next->next;
	rev = reverse_listint(&tmp); /* the function to reverse the new assig value of tmp 2nodes ahead */
	mid = rev;

	tmp = *head;
	while (rev)
	{
		if (tmp->n != rev->n)
			return (0);
		tmp = tmp->next;
		rev = rev->next;
	}
	reverse_listint(&mid);

	return (1);
}
