#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	pid_t child_pid;
	int status;
	int i;
	char *args[] = {"ls", "-1", "/tmp", NULL};

	for (i = 1; i <= 5; i++)
	{
	child_pid = fork();
	if (child_pid == -1)
	{
        return (1);
	}
	}
	if (child_pid == 0)
	{
	execve("/user/bin/ls", args, NULL);
	exit(1);
	}
	else
	{
	/*parent*/
	wait(&status);
	}
	return (0);
}
