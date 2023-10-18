#include "shell.h"

/*
 * File: phy.c
 * Auth: [faruq and mariam]
 * Desc: Simple loop for a shell program.
 * return: Always (0)
 */

int main(void)
{
	char bars[110];

	while (true)
	{
		life_saving_prompt();
		command_reader(bars, sizeof(bars));
		chief_command(bars);
	}
	return (0);
}
