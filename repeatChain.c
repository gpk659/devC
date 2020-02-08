#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int size(char chaine[], char a)
{
	int i = 0;
	int times = 0;
	while(chaine[i] != '\0' )
	{
	 if(chaine[i] == a){
	  i++;
	  times++;
	 }else{
	   i++;
	  }
	}
	return times;
}

int main(void)
{
	printf("%d", size("test",'t'));
}
