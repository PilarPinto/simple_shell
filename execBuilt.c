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
