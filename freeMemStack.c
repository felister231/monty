#include "monty.h"

/*
 * free_Memstack - Frees a doubly linked list
 * @stack_hea_d: stack_hea_d pointer to the stack
 *
 * Return: Nothing
 */
void free_Memstack(stack_t *stack_hea_d)
{
    stack_t *temp;

    temp = stack_hea_d;
    while (stack_hea_d)
    {
        temp = stack_hea_d->next;
        free(stack_hea_d);
        stack_hea_d = temp;
    }
}

/*
 * clearBusLifi - Clears a specific value in a structure
 * @stack_hea_d: stack_hea_d of stack (not used here)
 * @countLine: Line count (not used here)
 *
 * Return: Nothing
 */
void clearBusLifi(stack_t **stack_hea_d, unsigned int countLine)
{
    (void)stack_hea_d; /* Parameter not used */
    (void)countLine; /* Parameter not used */
    bus.lifi = 0; /* Clear the value in the 'lifi' member of the 'bus' structure */
}
