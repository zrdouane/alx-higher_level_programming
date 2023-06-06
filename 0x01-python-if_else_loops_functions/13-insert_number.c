#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to head of list
 * @number: number to insert
 * Return: address of new node or NULL if failed
*/
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new, *current, *prev;

    if (!head)
        return (NULL);

    new = malloc(sizeof(listint_t));
    if (!new)
        return (NULL);

    new->n = number;
    new->next = NULL;

    if (!*head)
    {
        *head = new;
        return (new);
    }

    current = *head;
    prev = NULL;

    while (current && current->n < number)
    {
        prev = current;
        current = current->next;
    }

    if (prev == NULL)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        prev->next = new;
        new->next = current;
    }

    return (new);
}

