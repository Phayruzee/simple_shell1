#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>

void life_saving_prompt(void);
void fm_print(const char *learning_string);
void chief_command(const char *bars);
void command_reader(char *bars, size_t size);


#endif /* shell_h reader */
