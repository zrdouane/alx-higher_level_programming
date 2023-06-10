#include "lists.h"

/**
 * reverse_list - reverses a list
 * @head: Double pointer to head of the list
 *
 * Return: Pointer to new head of reversed list
 */
listint_t *reverse_list(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}

/**
 * compare_lists - compare 2 linked lists
 * @list1: Pointer to head of first list
 * @list2: Pointer to head of second list
 *
 * Return: 1 lists are true, 0 otherwise
 */
int compare_lists(listint_t *list1, listint_t *list2)
{
	while (list1 != NULL && list2 != NULL)
	{
		if (list1->n != list2->n)
			return (0);

		list1 = list1->next;
		list2 = list2->next;
	}

	return (list1 == NULL && list2 == NULL);
}

/**
 * is_palindrome - Checks if linked list is palindrome
 * @head: Double pointer to head of linked list
 *
 * Return: 1 if linked list is palin, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *prev_slow = *head;
	listint_t *mid = NULL;
	listint_t *second_half = NULL;
	int palindrome = 1;

	if (*head == NULL || (*head)->next == NULL)
		return (palindrome);
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		prev_slow = slow;
		slow = slow->next;
	}
	if (fast != NULL)
	{
		mid = slow;
		slow = slow->next;
	}
	second_half = slow;
	prev_slow->next = NULL;
	reverse_list(&second_half);
	palindrome = compare_lists(*head, second_half);
	reverse_list(&second_half);
	if (mid != NULL)
	{
		prev_slow->next = mid;
		mid->next = second_half;
	}
	else
		prev_slow->next = second_half;
	return (palindrome);
}
