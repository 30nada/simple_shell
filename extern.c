#include "shell.h"

extern char **environ;
int main(void)
{
	int a = 0;

	while(environ[a])
	{
	printf("environ[%d] = %s\n", a, environ[a]);
	a++;
	}
	return (0);
}
