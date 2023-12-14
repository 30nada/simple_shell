#include "shell.h"

void interative()
{
	size_t n = 0;
	char *getinput = NULL;
	
	printf("$ ");
	if (getline(&getinput, &n, stdin) == -1)
	{
	free(getinput);
	exit(EXIT_FAILURE);
	}
	printf("value entered is %s\n", getinput);
}

void non_interactive()
{
	printf("Iam in non interactive mode\n");
}

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
	printf("HI\n");
	interative();
	}
	else
	{
	printf("ERROR\n");
	non_interactive();
	}
	printf("outside\n");
	return (0);
}
