#include "shell.h"

void chief_command(const char *bars)
{
	pid_t child_pid = fork();
	/* child pid creation */

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[140]; /* Array to store the command and its arguments */
		int counter_arg = 0; /* Counter for the number of arguments */
		
		/* Tokenize the input string to extract the command and its arguments */
		char *token = strtok((char *)bars, " ");
		while (token != NULL)
		{
			args[counter_arg++] = token;
			token = strtok(NULL, " ");
		}
		args[counter_arg] = NULL; /* Null-terminate the args array */
		
		/* Execute the command */
		execvp(args[0], args);

		/** if execvp fails print an error message.*/
		fm_print("Problem encounter while executing Bars.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		/* parent process */
		wait(NULL);
	}
}
