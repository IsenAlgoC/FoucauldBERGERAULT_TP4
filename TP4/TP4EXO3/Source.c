#include<stdlib.h>
#include<stdio.h>

int main() {
	char nom[20], prenom[20], sexe;
	printf(" Entrer le Nom : ");
	scanf_s("%s", nom, (unsigned)_countof(nom));
	printf("\n Entrer le prenom : ");
	scanf_s("%s", prenom, (unsigned)_countof(prenom));
	printf("\n H ou F : ");
	sexe = _getch();
	if (sexe == 'h' || sexe == 'H') {
		printf("\nMonsieur %s %s", prenom, nom);
	}
	else {
		printf("\n Madame %s %s", prenom, nom);
	};
	//scanf_s("%c", &sexe);
	
}