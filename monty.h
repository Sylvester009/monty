#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
* struct bug_g - Variables - args, file, line content
* @arg: Value
* @file_pointer: Pointer to Monty file
* @line_content: Line content
* @stack_queue_flg: Flag to change stack <-> queue
* Description: Structure carrying values through the program
*/

typedef struct bag_g
{
    char *argument;            /* Value of the argument */
    FILE *file_pointer;        /* Pointer to the Monty file */
    char *line_content;        /* Content of the current line */
    int stack_queue_flg;      /* Flag to change stack <-> queue */
} bag_t;

extern bag_t bag;


/**pull and pall*/
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);

/*Execution file*/
void execute(stack_t **stack, unsigned int line_number);

#endif
