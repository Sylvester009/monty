#include "monty.h"
/**
* pint - prints the value at the top of the stack
* @head: head of stack
* @line_count: counts line
* Return: void
*/
void pint(stack_t **head, unsigned int line_count)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_count);
fclose(bag.file_pointer);
free(bag.line_content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}

/**
* f_pop - removes the top element of the stack.
* @head: head of stack
* @line_count: counts line
* Return: void
*/
void pop(stack_t **head, unsigned int line_count)
{
stack_t *h;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n",line_count);
fclose(bag.file_pointer);
free(bag.line_content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
*head = h->next;
free(h);
}

/**
* swap - adds the top two elements of the stack.
* @head: head of stack
 * @line_count: counts line
 * Return: void
*/
void swap(stack_t **head, unsigned int line_count)
{
	stack_t *h;
	int len = 0, tmp;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bag.file_pointer);
		free(bag.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	tmp = h->n;
	h->n = h->next->n;
	h->next->n = tmp;
}
