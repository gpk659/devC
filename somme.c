#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somme(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int main(void)
{
	printf("%d\n", somme(1,4));
}
