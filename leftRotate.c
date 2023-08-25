#include "monty.h"

/**
* rotate_left- rotate_left
* @stack_hea_d: stack_hea_d of the stack
* @countLine: line count
*
* Return: nothing
*/
void rotate_left(stack_t **stack_hea_d,  __attribute__((unused)) unsigned int countLine)
{
	stack_t *tmp = *stack_hea_d, *aux;

	if (*stack_hea_d == NULL || (*stack_hea_d)->next == NULL)
	{
		return;
	}
	aux = (*stack_hea_d)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack_hea_d;
	(*stack_hea_d)->next = NULL;
	(*stack_hea_d)->prev = tmp;
	(*stack_hea_d) = aux;
}