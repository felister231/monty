#include "monty.h"

/**
 * rotate_left - Rotates the stack to the top
 * @head: Pointer to the head of the stack
 * @counter: Line count (unused)
 *
 * Return: Nothing
 */
void rotate_left(stack_t **head, __attribute__((unused)) unsigned int counter)
{
    stack_t *current = *head, *newHead;

    if (*head == NULL || (*head)->next == NULL)
    {
        return; // Nothing to rotate
    }

    newHead = (*head)->next;
    newHead->prev = NULL;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = *head;
    (*head)->next = NULL;
    (*head)->prev = current;
    (*head) = newHead;
}
