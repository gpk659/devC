#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc, char * argv[])
{
	int i=0;
	int result = 0;
	for(i ; i < argc; i++)
	{
		printf("\nChiffre :  %s\t", argv[i]);
		result += atoi(argv[i]);
	}
	printf("\nResultat : ");
	printf("%d\n", result);
}
