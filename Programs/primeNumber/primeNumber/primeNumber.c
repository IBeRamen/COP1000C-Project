//**********************************
// Written By.: Michael Dews
// Written on.: 10/24/2016
// Written for: Displays all prime numbers between 1 and 100
//**********************************

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE myPause()
#define CLS system("cls")
#include <stdlib.h>
#include <stdio.h>

void myPause();
int findPrime(int primeNum);

main() {
	int primeNum = 4;
	printf("The prime numbers between 1 and 100 are:\n\t1, 3, 5, 7, ");

	while (primeNum < 100) {
		primeNum = findPrime(primeNum);
		if (primeNum != 1)
			printf("%i, ", primeNum);
		else {
			primeNum = 101;
		}
	}

	PAUSE;
}//end of main
 //******************************************************

int findPrime(int primeNum) {
	int result;
	do {
		primeNum++;
		if (primeNum == 100)
			primeNum = 1;
	} while (primeNum % 2 == 0 || primeNum % 3 == 0 || primeNum % 5 == 0 || primeNum % 7 == 0);

	result = primeNum;
	return(result);
}

void myPause() {
	getchar();
}