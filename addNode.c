#include "monty.h"

/**
 * addnode - Adds a new node to the stack_hea_d of the stack
 * @stack_hea_d: A pointer to the stack_hea_d of the stack
 * @n: The integer value for the new node
 *
 * Return: Nothing
 */
void addnode(stack_t **stack_hea_d, int n)
{
    stack_t *newNode = malloc(sizeof(stack_t));
    
    if (newNode == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newNode->n = n;
    newNode->prev = NULL;
    newNode->next = *stack_hea_d;

    if (*stack_hea_d != NULL)
        (*stack_hea_d)->prev = newNode;

    *stack_hea_d = newNode;
}
