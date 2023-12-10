#include <stdio.h>
#include <stdlib.h>

char *_getenv(const char *name)
{
	extern char **environ;
	int i;
	char *token;

	i = 0;
	while (environ[i]);
}

void main(void)
{
	char *homevalue = _getenv("HOME");
	printf("%s\n", homevalue);
}
