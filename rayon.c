#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int rayon)
{
	int result;
	result = (3.14159)*(rayon*rayon);
	return result;
}

int main(void)
{
	printf("%d\n",max(2));
}
