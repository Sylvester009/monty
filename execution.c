#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
* execute - function that executes the opcode
* @stack: head stack linked list
* @line_number: line count
*
* Return: nothing
*/

void execute(stack_t **stack, unsigned int line_number)
{
char *opcode;
int value;
  
if (sscanf(bag.line_content, "%s %d", &opcode, &value) == 2)
{
if (strcmp(opcode, "push") == 0)
{
push(stack, value);
}
else if (strcmp(opcode, "pall") == 0)
{
pall(stack, line_number);
}
else
{
fprintf(stderr, "Unknown opcode '%s' at line %u\n", opcode, line_number);
exit(EXIT_FAILURE);
}

free(opcode);
}
else
{
fprintf(stderr, "Invalid instruction format at line %u\n", line_number);
exit(EXIT_FAILURE);
}
}
