#include "monty.h"

/**
* printChar_sring - function that prints the char at the top of the stack,
* followed by a new line
* @stack_hea_d: stack stack_hea_d
* @countLine: line count
*
* Return: nothing
*/
void printChar_sring(stack_t **stack_hea_d, unsigned int countLine)
{
	stack_t *h;

	h = *stack_hea_d;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
