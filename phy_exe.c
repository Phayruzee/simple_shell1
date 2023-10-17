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
		/* child process id. */
		execlp(bars, bars, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else 
	{
		/* parent process */
		wait(NULL);
	}
}
