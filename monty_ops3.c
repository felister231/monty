#include "monty.h"

/**
* printTop_stack - function that prints the top of the stack
* @stack_hea_d: double stack_hea_d pointer to the stack
* @countLine: line count
*
* Return: nothing
*/
void printTop_stack(stack_t **stack_hea_d, unsigned int countLine)
{
	stack_t *h;

	if (*stack_hea_d == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	h = *stack_hea_d;
	*stack_hea_d = h->next;
	free(h);
}

/**
* printStackstack_hea_d - function that prints the top of the stack
* @stack_hea_d: double stack_hea_d pointer to the stack
* @countLine: line count
*
* Return: nothing
*/
void printStackstack_hea_d(stack_t **stack_hea_d, unsigned int countLine)
{
	if (*stack_hea_d == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack_hea_d)->n);
}

/**
* doNothing - function that does nothing
* @stack_hea_d: double stack_hea_d pointer to the stack
* @countLine: line count
*
* Return: nothing
*/
void doNothing(stack_t **stack_hea_d, unsigned int countLine)
{
	(void) countLine;
	(void) stack_hea_d;
}
