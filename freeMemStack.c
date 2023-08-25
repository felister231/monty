#include "monty.h"

/**
* free_Memstack - function that frees a doubly linked list
* @head: head pointer to the stack
*
* Return: nothing
*/
void free_Memstack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
* clearBusLifi  - function that prints the top
* @head: head of stack
* @counter: line count
*
* Return: nothing
*/
void clearBusLifi (stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
