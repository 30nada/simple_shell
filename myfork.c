#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("%u this is my pid\n", getpid());
	return (0);
}
