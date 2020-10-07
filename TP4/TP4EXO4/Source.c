#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {
	int nbLettre = 0, j = 0, palindrome = 0;
	char mot[20];
	printf("Entrer votre mot : ");
	scanf_s("%s", mot, (unsigned)_countof(mot));
	while (mot[j] != 0)
	{
		nbLettre += 1;
		mot[j] = toupper(mot[j]);
		j++;
	};

	//nbLettre = strlen(mot);

	for (int i = 0; i < (nbLettre / 2); i++) {
		if (mot[i] != mot[nbLettre - (1 + i)]) {
			palindrome = 1;
			printf("\nCe mot n'est pas un palindrome\n");
			break;
		};
	};
	if (palindrome == 0) {
		printf("\nCe mot est un palindrome\n");
	};
	system("pause");
}
