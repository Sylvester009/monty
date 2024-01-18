#include "monty.h"
/**
 * addnode - adds node to the head stack
 * @head: stack head
 * @n: new value
 * Return: void
*/
void add_node(stack_t **head, int n)
{

	stack_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (tmp)
		tmp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

**
 * addqueue - adds node to the tail stack
 * @n: new value
 * @head: head of the stack
 * Return: void
*/
  
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
}

/**
* free_stack - frees a doubly linked list
* @head: stack head
*/

void free_stack(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
