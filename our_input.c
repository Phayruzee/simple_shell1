/* this is a function that receives the users input */
#include "shell.h"

void command_reader(char *bars, size_t size)
	/* space added before the parenthesis*/
{
	if (fgets(bars, size, stdin) == NULL)
		/* removed extra space*/
	{
		if (feof(stdin))
		{
			fm_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			fm_print("problem while processing input.\n");
			/* removed trailing whitespace*/
			exit(EXIT_FAILURE);
		}
	}
	bars[strcspn(bars, "\n")] = '\0';
    /* remove newline in the string */
}

