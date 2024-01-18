#include "monty.h"

/**
* push - Pushes an element onto the stack.
* @stack: double head pointer to the stack
* @line_number: line count
*
* Return: nothing
*/

void push(stack_t **stack, unsigned int line_number)
{
int value;
stack_t *new_node = malloc(sizeof(stack_t));
  
if (bag.argument == NULL)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}

/* Extract the integer argument from the bus structure */
if (sscanf(bag.argument, "%d", &value) != 1)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}

/* Create a new node with the integer value and push it onto the stack */
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

new_node->value = value;
new_node->prev = NULL;
new_node->next = *stack;

if (*stack != NULL)
(*stack)->prev = new_node;

*stack = new_node;
}

/**
* pall - Prints all the values on the stack.
* @stack: double head pointer to the stack
* @line_number: unused line count
*
* Return: nothing
*/

void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current;
current = *stack;
(void)line_number;

/* Check if the stack is empty */
if (stack == NULL || *stack == NULL)
return;

/* Print all values on the stack, starting from the top */
while (current != NULL)
{
printf("%d\n", current->value);
current = current->next;
}
}
