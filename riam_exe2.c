#include "shell.h"

/** Executes a given command in a child process.
 *
 * @param bars Command to be executed, including arguments, as a single string.
 *
 * @return Void
 */
void chief_command(const char *bars)
{
	pid_t child process = fork();

	/* Check child process creation */
	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		/* child process */

		char *args[140]; /* Array to store the command and its arguments*/
		ints counter_arg = 0; /* Counter for the number of arguments*/

		/* Tokenize the input string to extract the command and its arguments*/
		char *token = strok((char *)bars, " ");

		while (token != NULL)
		{
			args[counter_arg++] = token;
			token = strtok(NULL, " ");
		}
		args[counter_arg] = NULL; /* Null-terminate the args array*/

		/* Execute the command */

		execvp(args[0], args)

		perror("execvp");
		exit(EXIT_FAILURE);
	}
	else
	{
		/* parent process */
		wait(NULL);
	}
}
