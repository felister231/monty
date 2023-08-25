#include "monty.h"

/**
* addTop_twoElem - function that adds the top two elements of the stack
* @stack_hea_d: double pointer stack_hea_d to the stack
* @countLine: line count
*
* Return: nothing
*/
void addTop_twoElem(stack_t **stack_hea_d, unsigned int countLine)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	h = *stack_hea_d;
	temp = h->n + h->next->n;
	h->next->n = temp;
	*stack_hea_d = h->next;
	free(h);
}

/**
* subtractNodes - function that substracts nodes
* @stack_hea_d: double stack_hea_d pointer to the stack
* @countLine: line count
*
* Return: nothing
*/
void subtractNodes(stack_t **stack_hea_d, unsigned int countLine)
{
	stack_t *temp;
	int sub, nd;

	temp = *stack_hea_d;
	for (nd = 0; temp != NULL; nd++)
		temp = temp->next;
	if (nd < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	temp = *stack_hea_d;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*stack_hea_d = temp->next;
	free(temp);
}

/**
* multiplyTop_twoElem - function that multiplies the top two elements of the stack
* @stack_hea_d: double stack_hea_d pointer to the stack
* @countLine: line count
*
* Return: nothing
*/
void multiplyTop_twoElem(stack_t **stack_hea_d, unsigned int countLine)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	h = *stack_hea_d;
	temp = h->next->n * h->n;
	h->next->n = temp;
	*stack_hea_d = h->next;
	free(h);
}

/**
* divideTop_twoElem - function that divides the top two elements of the stack
* @stack_hea_d: double stack_hea_d pointer to the stack
* @countLine: line count
*
* Return: nothing
*/
void divideTop_twoElem(stack_t **stack_hea_d, unsigned int countLine)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	h = *stack_hea_d;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	temp = h->next->n / h->n;
	h->next->n = temp;
	*stack_hea_d = h->next;
	free(h);
}

/**
* getModulo - function that computes the remainder of the division of the second
* top element of the stack by the top element of the stack
* @stack_hea_d: double stack_hea_d pointer to the stack
* @countLine: line count
*
* Return: nothing
*/
void getModulo(stack_t **stack_hea_d, unsigned int countLine)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	h = *stack_hea_d;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE);
	}
	temp = h->next->n % h->n;
	h->next->n = temp;
	*stack_hea_d = h->next;
	free(h);
}
