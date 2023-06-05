#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
    if (list == NULL)
        return 0;

    listint_t *slow = list;
    listint_t *fast = list->next;

    while (fast != NULL && fast->next != NULL)
    {
        if (slow == fast)
            return 1;

        slow = slow->next;
        fast = fast->next->next;
    }

    return 0;
}

