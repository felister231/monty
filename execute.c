#include "monty.h"

/**
 * execute_instructions - Execute the opcode instructions
 * @lineContent: Line content
 * @stackstack_hea_d: stack_hea_d of the stack
 * @lineNumber: Line count
 * @montyFile: Pointer to the monty file stream
 *
 * Return: 0 on success, 1 on failure
 */
int execute_instructions(char *lineContent, stack_t **stackstack_hea_d, unsigned int lineNumber, FILE *montyFile)
{
    instruction_t opcodes[] = {
        {"push", pushNode}, {"pall", printEVerything}, {"pint", printStackstack_hea_d},
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
        {"stack", clearBusLifi},
        {NULL, NULL}
    };

    unsigned int opcodeIndex = 0;
    char *currentOpcode;

    currentOpcode = strtok(lineContent, " \n\t");
    if (currentOpcode != NULL && currentOpcode[0] == '#')
        return (0);

    bus.arg = strtok(NULL, " \n\t");

    while (opcodes[opcodeIndex].opcode != NULL && currentOpcode != NULL)
    {
        if (strcmp(currentOpcode, opcodes[opcodeIndex].opcode) == 0)
        {
            opcodes[opcodeIndex].f(stackstack_hea_d, lineNumber);
            return (0);
        }
        opcodeIndex++;
    }

    if (currentOpcode != NULL && opcodes[opcodeIndex].opcode == NULL)
    {
        fprintf(stderr, "L%d: unknown instruction %s\n", lineNumber, currentOpcode);
        fclose(montyFile);
        free(lineContent);
        free_Memstack(*stackstack_hea_d);
        exit(EXIT_FAILURE);
    }

    return (1);
}
