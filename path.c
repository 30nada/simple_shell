#include "shell.h"
#include <string.h>

int main(char ac,char **argv)
{
	char *store = NULL;
	char *store2 = NULL;
	char fullpath[50];
	struct stat st;
	int i = 0;
       
	store = getenv("PATH");
	store2 = strtok(store, ":");
	do{

	strcpy(fullpath, store2);
	printf("fullpath[%d] is %s\n", i, fullpath);
	strcat(fullpath, "/");
	printf("fullpath[%d] is now %s\n", i, fullpath);
	strcat(fullpath, argv[1]);
	printf("fullpath[%d] is now %s\n", i, fullpath);
	if (stat(fullpath, &st) == 0)
	{
	printf("%s found\n", fullpath);
	return (0);
	}
	i++;
	}while(store2 = strtok(NULL, ":"));
	printf("%s found\n", fullpath);
	return (0);
}
