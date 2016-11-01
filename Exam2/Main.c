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

void showDieFace();
void howFar();

char getSelection();

#include "dieRoller.h"
#include "howFar.h"

int main()
{

	srand((unsigned)time(NULL));

	int userSelection;
	char dieFaceAgain;

	do
	{
		userSelection = getSelection();

		switch (userSelection)
		{

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

		case 'B':
			CLS;

			howFar();

			PAUSE;

			break;

		case 'C':
			CLS;

			PAUSE;

			break;

		case 'D':
			CLS;

			PAUSE;

			break;

		case 'E':
			CLS;

			PAUSE;

			break;

		case 'F':
			CLS;
			
			displayCredit();

			PAUSE;

			break;

		case 'Q':
			CLS;

			printf("Exiting...\n");

			PAUSE;

			break;

		default:
			printf("Invalid selection!\n");

			PAUSE;

			break;

		}

	} while (userSelection != 'Q');

} // end main

void displayCredit()
{
	printf("This program was made by:\n");
	printf("Omar Rahman: Organized team, put together the program and made How Far.\n");
	printf("Micheal: Prime Numbers and Dice Roller.\n");
	printf("Jacob: Decimal to Binary\n");
	printf("Kasey: Temperature Converter\n");
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