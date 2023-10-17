/* this is a function that recives the users input*/
#include "shell.h"


void command_reader(char *bars, size_t size)
{
	if(fgets(bars, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			fm_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			fm_print("problem while processing input. \n");
			exit(EXIT_FAILURE);
		}
	}
	bars[strcspn(bars, "\n")] = '\0';
	/* remove newline in the string */
}
