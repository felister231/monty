#include "monty.h"

/**
 * rotate_right - Rotates a doubly linked list to the right by one position.
 * @stack_hea_d: A pointer to the pointer to the stack_hea_d node of the linked list.
 * @countLine: Unused variable (not used in the function).
 *
 * Description: This function rotates the linked list to the right by moving
 * the last node to become the new stack_hea_d node, while maintaining the linkage
 * between nodes. The countLine variable is not used in this implementation.
 */
void rotate_right(stack_t **stack_hea_d, __attribute__((unused)) unsigned int countLine)
{
	stack_t *copy;

	copy = *stack_hea_d;

	/* Check if the list is empty or has only one node */
	if (*stack_hea_d == NULL || (*stack_hea_d)->next == NULL)
	{
		return;
	}

	/* Traverse to the last node */
	while (copy->next)
	{
		copy = copy->next;
	}

	/* Make the list circular by connecting the last node to the original stack_hea_d */
	copy->next = *stack_hea_d;
	copy->prev->next = NULL;  /* Break the circular connection from the previous last node */

	/* Update pointers to reflect the new stack_hea_d node */
	copy->prev = NULL;
	(*stack_hea_d)->prev = copy;
	(*stack_hea_d) = copy;  /* Update stack_hea_d pointer */
}
