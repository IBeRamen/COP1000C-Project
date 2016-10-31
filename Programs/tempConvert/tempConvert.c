#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define PAUSE system("pause");
#define CLS system("CLS");
#define FLUSH flush();

void cTemp();
void flush();
void fTemp();
char getChoice();

main() {

	char userChoice;

	do {
		userChoice = getChoice();
		switch (userChoice) {
			// Convert temperature from Fahrenheit to Celsius
		case 'C':
			CLS;
			cTemp();
			PAUSE;
			break;
			// Convert temperature from Celsius to Fahrenheit 
		case 'F':
			CLS;
			fTemp();
			PAUSE;
			break;
			// Quit Menu
		case 'Q':
			CLS;
			PAUSE;
			break;
		default:
			printf("Invlaid Selection\n");
			PAUSE;
			break;
		} // end switch
	} while (userChoice != 'Q');

} // end of main
void cTemp() {
	double cTemp;
	float origTemp;
	CLS;
	printf("Enter the temperature you'd like to convert: ");
	scanf("%f", &origTemp);
	FLUSH;
	cTemp = (origTemp - 32) / 1.8;
	printf("%f degrees Fahrenheit is equal to %lf degrees Celsius\n", origTemp, cTemp);
} // end cTemp

void displayMenu() {
	CLS;
	printf("Choose from the following:\n");
	printf("C) Convert temperature from Fahrenheit to Celsius\n");
	printf("F) Convert temperature from Celsius to Fahrenheit\n");
	printf("Q) QUIT\n");

	printf("Enter your selection: ");
} // end displayMenu

void flush() {
	while (getchar() != '\n');
} // end flush

void fTemp() {
	double fTemp;
	float origTemp;
	CLS;
	printf("Enter the temperature you'd like to convert: ");
	scanf("%f", &origTemp);
	FLUSH;
	fTemp = 1.8 * origTemp + 32;
	printf("%f degrees Celsius is equal to %lf degrees Fahrenheit\n", origTemp, fTemp);
}

char getChoice() {
	char result;
	displayMenu();
	scanf("%c", &result);
	FLUSH;
	return result;
} // end of getChoice