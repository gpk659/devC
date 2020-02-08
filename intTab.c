#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (int argc, char * argv[])
{
	
	int tab[6];
	for(int i=1 ; i < argc; i++)
	{
		tab[i] = atoi(argv[i]);
	}
	
	for(int i=1; i <argc; i++)
	{
	printf("%d\n",tab[i]);
	}
}
