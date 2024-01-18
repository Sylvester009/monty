#include "monty.h"

struct
{
char *current_line;
} uni_data;

bag_t bag = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[])
{
stack_t *stack = NULL;

char line_buffer[MAX_LINE_LENGTH];

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
while (fgets(line_buffer, sizeof(line_buffer), bag.file_pointer) != NULL)
{
bag.line_content = my_strdup(line_buffer);
if (bag.line_content == NULL)
{
fprintf(stderr, "Error: Memory allocation failed\n");
fclose(bag.file_pointer);
return (EXIT_FAILURE);
}

uni_data.current_line = bag.line_content;
printf("Executing: %s", bag.line_content);
execute(&stack, 1);

free(bag.line_content);
}

fclose(bag.file_pointer);

return (0);
}
