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
return EXIT_FAILURE;
}

while (getline(&bag.line_content, &(size_t){0}, bag.file_pointer) != -1)
{
uni_data.current_line = bag.line_content;
process_instruction(&stack, 1);
}

fclose(bag.file_pointer);
free(bag.line_content);

return (0);
}
