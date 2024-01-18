#include "monty.h"

char *my_strdup(const char *str)
{
size_t len = strlen(str);
char *copy = malloc(len + 1);
if (copy == NULL) {
return (NULL);
}
strcpy(copy, str);
return (copy);
}
