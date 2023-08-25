#include "monty.h"

/**
* pushNode - function that adds node to the stack
* @stack_hea_d: double stack_hea_d pointer to the stack
* @countLine: line count
*
* Return: nothing
*/
void pushNode(stack_t **stack_hea_d, unsigned int countLine)
{
	int i, m = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			m++;
		for (; bus.arg[m] != '\0'; m++)
		{
			if (bus.arg[m] > 57 || bus.arg[m] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", countLine);
			fclose(bus.file);
			free(bus.content);
			free_Memstack(*stack_hea_d);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", countLine);
		fclose(bus.file);
		free(bus.content);
		free_Memstack(*stack_hea_d);
		exit(EXIT_FAILURE); }
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(stack_hea_d, i);
	else
		addqueue(stack_hea_d, i);
}
