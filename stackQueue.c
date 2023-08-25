#include "monty.h"

/**
* f_queue - A function that prints the top of the queue
* @stack_hea_d: stack_hea_d of queue
* @countLine: line count
*
* Return: nothing
*/
void f_queue(stack_t **stack_hea_d, unsigned int countLine)
{
	(void)stack_hea_d;
	(void)countLine;
	bus.lifi = 1;
}

/**
* addqueue - function that add node to the tail the queue
* @n: new value
* @stack_hea_d: stack_hea_d of the queue
*
* Return: nothing
*/
void addqueue(stack_t **stack_hea_d, int n)
{
	stack_t *new_node, *temp;

	temp = *stack_hea_d;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*stack_hea_d = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
}
