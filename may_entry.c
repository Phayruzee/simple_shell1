#include "shell.h"

int main(void)
{
	char bars[110];

	while (true)
	{
		life_saving_prompt();
		command_reader(bars, sizeof(bars));
		chief_command(bars);
	}
	return 0;
}
