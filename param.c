#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argv, char** arg)
{
	int i=0;
	for(i ; i < argv; i++)
	{
		printf("Hello %s\t", arg[i]);
	}
}
