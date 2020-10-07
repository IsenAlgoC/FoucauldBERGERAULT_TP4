#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {
	char phrase[1024];
	float moyenne = 0;
	int nbMots=1,nbCaractere=0,j=0,nblettre = 0;
	gets_s(phrase, 1024);
	//scanf_s("%s", phrase);
	while (phrase[j] != 0)
	{
		nbCaractere += 1;
		j++;
	};
	//nbCaractere = strlen(phrase);
	for (int i = 0; i < nbCaractere; i++) {
		nblettre += 1;
		//printf("\nnblettre=%d", nblettre);
			if (phrase[i] == ' ') {
				nbMots += 1;
				moyenne += nblettre;
				nblettre = 0;
			};
		
	}
	moyenne = moyenne / nbMots;

	printf("\nLa phrase contient %d mots d'environ %f lettres.", nbMots, moyenne);
	system("pause");
}