#include "monty.h"

/* Global variable to store the current line being processed */
struct
{
char *current_line;
} uni_data;

/* Structure to carry values through the program */
bag_t bag = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[])
{
stack_t *stack = NULL;

if (argc != 2)
{
fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
return (EXIT_FAILURE);
}

bag.file_pointer = fopen(argv[1], "r");

if (bag.file_pointer == NULL)
{
fprintf(stderr, "Error: Could not open file %s\n", argv[1]);
return (EXIT_FAILURE);
}

bag.line_content = "push 10";
bag.stack_queue_flg = 0;

uni_data.current_line = bag.line_content;
push(&stack, 1);

uni_data.current_line = "pall";
pall(&stack, 2);

fclose(bag.file_pointer);

return (0);
}
