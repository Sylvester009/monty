#include "monty.h"

/**
* push - Pushes an element onto the stack.
* @stack: double head pointer to the stack
* @line_count: line count
*
* Return: nothing
*/

void push(stack_t **head, unsigned int line_count)
{
int i, k = 0, flg = 0;

if (bag.argument)
{
if (bag.argument[0] == '-')
k++;
for (; bag.argument[k] != '\0'; k++)
{
if (bag.argument[k] > 57 || bag.argument[k] < 48)
flg = 1;
}
if (flg == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", line_count);
fclose(bag.file_pointer);
free(bag.line_content);
free_stack(*head);
exit(EXIT_FAILURE); 
}
}
else
{ 
fprintf(stderr, "L%d: usage: push integer\n", line_count);
fclose(bag.file_pointer);
free(bag.line_content);
free_stack(*head);
exit(EXIT_FAILURE);
}
i = atoi(bag.argument);
if (bag.stack_queue_flg == 0)
add_node(head, i);
else
add_queue(head, i);
}

/**
* pall - Prints all the values on the stack.
* @stack: double head pointer to the stack
* @line_count: unused line count
*
* Return: nothing
*/

void pall(stack_t **head, unsigned int line_count)
{
	stack_t *current;
	(void)line_count;

	current = *head;
	if (current == NULL)
		return;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
