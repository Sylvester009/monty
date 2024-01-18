#include "monty.h"
#include <stdio.h>

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: argument vectors
* Return: 0
*/

bag_t bag = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[])
{
char *line_content;
FILE *file_pointer;
size_t size = 0;
ssize_t read_line = 1;
stack_t *stack = NULL;
unsigned int line_count = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file_pointer = fopen(argv[1], "r");
bag.file_pointer = file_pointer;
if (!file_pointer)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (read_line > 0)
{
line_content = NULL;
read_line = getline(&line_content, &size, file_pointer);
bag.line_content = line_content;
line_count++;
if (read_line > 0)
{
execute(line_content, &stack, line_count, file_pointer);
}
free(line_content);
}
free_stack(stack);
fclose(file_pointer);
return (0);
}
