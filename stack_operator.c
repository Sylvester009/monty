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
