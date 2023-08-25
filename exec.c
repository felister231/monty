#include "monty.h"

/**
* execute_instructions - function that execute_instructionss the opcode
* @stack: head stack linked list
* @counter: line count
* @file: pointer to monty file stream
* @content: line content
*
* Return: nothing
*/
int execute_instructions(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", pushNode}, {"pall", printEVerything}, {"pint", printStackHead},
				{"pop", printTop_stack},
				{"swap", swapTop_twoElem},
				{"add", addTop_twoElem},
				{"nop", doNothing},
				{"sub", subtractNodes},
				{"div", divideTop_twoElem},
				{"mul", multiplyTop_twoElem},
				{"mod", getModulo},
				{"pchar", printChar_sring},
				{"pstr", printStr_top},
				{"rotl", rotate_left},
				{"rotr", rotate_right},
				{"queue", f_queue},
				{"stack", clearBusLifi },
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_Memstack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
