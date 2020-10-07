#include<stdlib.h>
#include<stdio.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {
	int myTab1[TAILLETAB1];
	int *MyPtr1 = &myTab1[19];
	for (int i = 0; i < TAILLETAB1; i++) {
		myTab1[i] = i + 1;
		if (i == 19) {
			printf("%d\n", myTab1[i]);
		}
		else {
			printf("%d%c", myTab1[i], SEPARATEUR);
		};
		
	};
	for ( MyPtr1; MyPtr1>= &myTab1[0]; MyPtr1--) {
		if (MyPtr1 == &myTab1[0]) {
			printf("%p\n", MyPtr1);
		}
		else {
			printf("%p%c", MyPtr1, SEPARATEUR);
			
		};

	};

}