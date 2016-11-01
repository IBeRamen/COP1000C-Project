/*
*	Project: Exam 2
*	Authors: Omar, Micheal, Jacob and Kasey
*	Programs included: dieRoller, howFar, primeNumber, decimalToBinary and tempConvert
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

void displayCredit();
void displayMenu();
void flush();

void cTemp();
void decToBin();
void fTemp();
void howFar();
void showDieFace();
void showPrime();

char getSelection();
char getTempChoice();

int findPrime(int primeNum);

#include "dieRoller.h"
#include "howFar.h"
#include "primeNumber.h"
#include "decToBin.h"
#include "tempConvert.h"

int main()
{

	srand((unsigned)time(NULL));

	int userSelection;

	char dieFaceAgain;
	char userTempChoice;

	do
	{
		userSelection = getSelection();

		switch (userSelection)
		{

		// Die Roller
		case 'A':

			do
			{
				CLS;

				showDieFace();
				showDieFace();

				printf("Roll again? (Y/N) ");
				scanf_s("%c", &dieFaceAgain);
				
				FLUSH;

			} while (dieFaceAgain != 'N' && dieFaceAgain != 'n');
			
			PAUSE;

			break;

		// How Far
		case 'B':
			CLS;

			howFar();

			PAUSE;

			break;

		// Prime Numbers
		case 'C':
			CLS;

			showPrime();

			PAUSE;

			break;

		// Decimal to Binary Converter
		case 'D':
			CLS;

			decToBin();

			PAUSE;

			break;

		// Temperature Converter
		case 'E':
			CLS;

			do
			{
				userTempChoice = getTempChoice();

				switch (userTempChoice)
				{

				// Convert temperature from Celsius to Fahrenheit
				case 'C':
					CLS;

					cTemp();

					PAUSE;

					break;

				// Convert temperature from Fahrenheit to Celsius
				case 'F':
					CLS;

					fTemp();

					PAUSE;

					break;

				case 'Q':

					CLS;

					printf("Exiting Convert Temperature...\n");

					break;

				default:

					printf("Invalid selection.\n");

					PAUSE;

					break;
				} // end switch

			} while (userTempChoice != 'Q');

			PAUSE;

			break;

		// Display Credit
		case 'F':
			CLS;
			
			displayCredit();

			PAUSE;

			break;

		// Quit
		case 'Q':
			CLS;

			printf("Exiting...\n");

			PAUSE;

			break;

		// Invalid Selection
		default:
			printf("Invalid selection!\n");

			PAUSE;

			break;

		} // end switch

	} while (userSelection != 'Q');

} // end main

void displayCredit()
{
	printf("This program was made by:\n");
	printf("Omar Rahman: Organized team, put together the program and made How Far.\n");
	printf("Micheal: Prime Numbers and Dice Roller.\n");
	printf("Jacob: Decimal to Binary.\n");
	printf("Kasey: Temperature Converter.\n");
}

void displayMenu()
{
	CLS;

	printf("================ Menu =================\n");
	printf("A) Die Roller\n");
	printf("B) How Far\n");
	printf("C) Prime Number\n");
	printf("D) Decimal to Binary\n");
	printf("E) Temperature Converter\n");
	printf("F) Credits\n");
	printf("Q) Exit\n");
	printf("=======================================\n");

	printf("Enter selection: ");

} // end displayMenu

char getSelection()
{
	char result;

	displayMenu();
	scanf_s("%c", &result);
	FLUSH;

	return toupper(result);
} // end getSelection

void flush()
{
	while (getchar() != '\n');
} // end flush