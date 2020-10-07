#include<stdlib.h>
#include<stdio.h>
#include "tp4.h"

int main() {
	HEURE HeureDebut, Heurefin, Duree;
	HeureDebut.heure = 12; HeureDebut.minute = 30;
	Duree.heure = 00; Duree.minute = 45;
	Heurefin.heure = HeureDebut.heure + Duree.heure;
	Heurefin.minute = HeureDebut.minute + Duree.minute;
	if (Heurefin.minute > 59) {
		Heurefin.minute = (Heurefin.minute % 60);
		Heurefin.heure += 1;
	};
	if (Heurefin.heure > 23) {
		Heurefin.heure = (Heurefin.minute % 24);
	};
	printf("Lheure de debut est %dH%d", HeureDebut.heure, HeureDebut.minute);
	printf("\n La duree est de %dH%d\n", Duree.heure, Duree.minute);
	printf("L'heure de fin est %dH%d", Heurefin.heure, Heurefin.minute);




}