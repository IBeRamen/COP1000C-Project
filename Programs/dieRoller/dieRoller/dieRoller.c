//**********************************
// Written By.: Michael Dews
// Written on.: 10/24/2016
// Written for: Displays the result of 2 d-6
//**********************************

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE myPause()
#define CLS system("cls")
#include <stdlib.h>
#include <stdio.h>


#include <time.h>

void flush();
void myPause();
void showDieFace();

main() {
	srand((unsigned)time(NULL));
	showDieFace();
	showDieFace();

	PAUSE;
}// end of main

void flush() {
	while (getchar() != '\n');
}

void myPause() {
	getchar();
}

void showDieFace() {
	int dieFace = 1 + rand() % (6 - 1 + 1);
	char die[7][9];

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 0 || i == 6)
				die[i][j] = '-';
			else if (j == 0 || j == 8) {
				if (i != 0 && i != 6)
					die[i][j] = '|';
			}
			else
				die[i][j] = ' ';

			if (dieFace == 1 || dieFace == 3 || dieFace == 5)
				die[3][4] = 'X';
			if (dieFace == 2 || dieFace == 3) {
				die[1][2] = 'X';
				die[5][6] = 'X';
			}
			if (dieFace == 4 || dieFace == 5 || dieFace == 6) {
				die[1][2] = 'X';
				die[1][6] = 'X';
				die[5][2] = 'X';
				die[5][6] = 'X';
			}
			if (dieFace == 6) {
				die[3][2] = 'X';
				die[3][6] = 'X';
			}

			printf("%c", die[i][j]);
		}
		printf("\n");
	}
}