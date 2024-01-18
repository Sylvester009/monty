#include "monty.h"

struct
{
char *current_line;
} uni_data;

bag_t bag = {NULL, NULL, NULL, 0};

void(argc);

int main(int argc, char *argv[])
{
stack_t *stack = NULL;
void(argc);

bag.argument = "10";
bag.file_pointer = fopen(argv[1], "r");
bag.line_content = "push 10";
bag.stack_queue_flg = 0;

uni_data.current_line = bag.line_content;
push(&stack, 1);

uni_data.current_line = "pall";
pall(&stack, 2);

return (0);
}
