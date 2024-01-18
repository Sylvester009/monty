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

int execute(char *line_content, stack_t **stack, unsigned int line_count, FILE *file_pointer)
{
instruction_t ops[] = {
{"push", push}, {"pall", pall},
{NULL, NULL}
};
unsigned int i = 0;
char *op;

op = strtok(line_content, " \n\t");
if (op && op[0] == '#')
return (0);
bag.argument = strtok(NULL, " \n\t");
while (ops[i].opcode && op)
{
if (strcmp(op, ops[i].opcode) == 0)
{	
ops[i].f(stack, line_count);
return (0);
}
i++;
}
if (op && ops[i].opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_count, op);
fclose(file_pointer);
free(line_content);
free_stack(*stack);
exit(EXIT_FAILURE); }
return (1);
}
