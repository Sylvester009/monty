#include "monty.h"

/**
* push - Pushes an element onto the stack.
* @stack: double head pointer to the stack
* @line_number: line count
*
* Return: nothing
*/

#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void push(stack_t **head, unsigned int count)
{
	int i, k = 0, flg = 0;

	if (bag.arg)
	{
		if (bag.arg[0] == '-')
			k++;
		for (; bag.arg[k] != '\0'; k++)
		{
			if (bag.arg[k] > 57 || bag.arg[k] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bag.file);
			free(bag.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bag.file);
		free(bag.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bag.arg);
	if (bag.stack_queue_flg == 0)
		addnode(head, n);
	else
		addqueue(head, n);
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
printf("%d\n", current->n);
current = current->next;
}
}
