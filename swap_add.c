#include "monty.h"
/**
 * swap - swaps the top two elements of the stack.
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
fprintf(stderr, "L%d: can't swap, stack too short\n", line_count);
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

/**
 * add - adds the top two elements of the stack.
 * @head: head of stack
 * @line_count: counts line
 * Return: void
*/
void add(stack_t **head, unsigned int line_count)
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
fprintf(stderr, "L%d: can't add, stack too short\n", line_count);
fclose(bag.file_pointer);
free(bag.line_content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
tmp = h->n + h->next->n;
h->next->n = tmp;
*head = h->next;
free(h);
}
