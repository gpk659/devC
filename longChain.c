#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int size(char chaine[])
{
	int i = 0;

	while(chaine[i] != '\0')
	{
	i++;
	}

	return i;
}

int main(void)
{
	printf("%d", size("bonjour"));
}
