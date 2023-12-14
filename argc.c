#include <stdio.h>

int main(int arge, char **argv)
{
	printf("ARGC is %s\n", argv *);

	int index = 0;

	for (index = 0; index < arge; index++)
	{
	printf("ARGC[%d] = %s\n", index, argv[index]);
	}
	return (0);
}
