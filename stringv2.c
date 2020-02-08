#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char *mytab[argc];

	for(int i=0 ; i < argc; i++)
	{
		//printf("\nArgument passé au programme : %s", argv[i]);
		mytab[i] = argv[i];
	}

	for(int i=0; i <= argc; i++){
		printf("\nContenu tableau de char[20] : %s",mytab[i]);
	}

	printf("\n====\nLongueur en bytes : %d", sizeof(mytab));
	printf("\nAdresse mémoire : %d\n\n", &mytab);

	free(&mytab);
}
