#include "monty.h"

/**
* printEVerything - function that prints everything in the stack
* @stack_hea_d: double stack_hea_d pointer to the stack
* @countLine: unused line count
*
* Return: nothing
*/
void printEVerything(stack_t **stack_hea_d, unsigned int countLine)
{
	stack_t *h;
	(void)countLine;

	h = *stack_hea_d;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

/**
* swapTop_twoElem - function that swaps the top two elements of the stack
* @stack_hea_d: stack_hea_d of stack
* @countLine: line count
*
* Return: nothing
*/
void swapTop_twoElem(stack_t **stack_hea_d, unsigned int countLine)
{
	stack_t *h;
	int length = 0, temp;

	h = *stack_hea_d;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	h = *stack_hea_d;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}
