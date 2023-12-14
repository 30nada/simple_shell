#include "shell.h"

/**
 * main - simple shell main function
 * @ac: count of argumnents
 * @av: argumnents
 * return: 0 always (success)
 */
int main(int ac, char **av)
{
	char *line = NULL;
	/*char **command = NULL;*/
	int status = 0;
	(void) ac;
	(void) av;
	while (1)
	{
	line = read_line();
	if (line == NULL) /* reache EOF Ctrl+D */
	return (status);
	printf("%s\n", line);
	/*command = tokenizer(line);
	 status = _execute(command, argv);*/
	}
}
