#include "shell.h"

void fm_print(const char *learning_string)
{
	write(STDOUT_FILENO, learning_string, strlen(learning_string));
}
