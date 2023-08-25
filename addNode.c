#include "monty.h"

/**
 * addnode - Adds a new node to the head of the stack
 * @head: A pointer to the head of the stack
 * @n: The integer value for the new node
 *
 * Return: Nothing
 */
void addnode(stack_t **head, int n)
{
    stack_t *newNode = malloc(sizeof(stack_t));
    
    if (newNode == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newNode->n = n;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL)
        (*head)->prev = newNode;

    *head = newNode;
}
