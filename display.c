#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 1000 //tab de taille 1000

int main (int argc, char *argv[])
{
	FILE* fichier=NULL;
	int i=0;
	char chaine[TAILLE_MAX]="";

	//boucle pour ouvrir le fichier avec le nom passé en parametre
	for(i; i < argc; i++){
	 fichier = fopen(argv[i], "r");
	}

	if(fichier != NULL)
	{
		while(fgets(chaine, TAILLE_MAX, fichier) != NULL) //on lit le fichier tant qu'on ne recoit pas d'erreur (null)
		{
		 printf("%s", chaine); //on affiche la chaine qu'on vient de lire
		}

		fclose(fichier);
	}else
	 {
	  printf("Impossible d'ouvrir le fichier...\n");
	 }

	return 0;
}
