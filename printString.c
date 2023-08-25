#include "monty.h"

/**
* printStr_top - function that prints the string starting at the top of the stack,
* followed by a new
* @stack_hea_d: stack_hea_d of stack
* @countLine: line count
*
* Return: nothing
*/
void printStr_top(stack_t **stack_hea_d, unsigned int countLine)
{
	stack_t *h;
	(void)countLine;

	h = *stack_hea_d;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
