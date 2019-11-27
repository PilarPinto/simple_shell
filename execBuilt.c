#include "shell.h"

char **splitInput(char *array)
{

	int counter = 0;
	char *tokenC;
	char *token;
	char **space;
	char *arrayCopy;
	int i = 0;

	arrayCopy = strdup(array);

	tokenC = strtok(arrayCopy, " \n\t");

	while (tokenC != NULL)
	{
		tokenC = strtok(NULL, " \n\t");
		counter++;
	}
	free(arrayCopy);

	space = malloc(sizeof(char*) * (counter + 1));

       	token = strtok(array, " \n\t");

	while (token != NULL)
	{
		space[i] = token;
		token = strtok(NULL, " \n\t");
		i++;
	}
	space[i] = NULL;
	return (space);
}


void duplicateProcess(char *array, char **space)
{
	pid_t my_pid;
	pid_t pid;
	int status;

	pid = fork();

	if (pid > 0)
	{
		wait(&status);
	}
	else if(pid == -1)
	{
		perror("Error:");
		free(array);
		free(space);
		exit(0);
	}
	else if (pid == 0)
	{
		if ((execve(space[0], space, NULL) == -1))
		{
			perror("Does not execute, write valid command");
			free(array);
			free(space);
			exit(0);
		}

	}

}
