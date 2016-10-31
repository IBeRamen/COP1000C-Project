/*
*	Project: Exam 2
*	Authors: Omar, Micheal, Jacob and Kasey
*	Programs included: dieRoller, howFar, primeNumber, binToDecimal and tempConvert
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

void flush();
void displayMenu();

int getSelection();

int main()
{

	int userSelection;

	do
	{
		userSelection = getSelection();

		switch (userSelection)
		{

		case 1:
			CLS;

			PAUSE;

			break;

		case 2:
			CLS;

			PAUSE;

			break;

		case 3:
			CLS;

			PAUSE;

			break;

		case 4:
			CLS;

			PAUSE;

			break;

		case 5:
			CLS;

			PAUSE;

			break;

		case 6:
			CLS;

			PAUSE;

			break;

		case 7:
			CLS;

			PAUSE;

			break;

		}
	} while (userSelection != 7);

} // end main

void displayMenu()
{
	CLS;

	printf("================ Menu =================\n");
	printf("1) Die Roller\n");
	printf("2) How Far\n");
	printf("3) Prime Number\n");
	printf("4) Binary to Decimal\n");
	printf("5) Temperature Converter\n");
	printf("6) Credits\n");
	printf("7) Exit\n");
	printf("=======================================\n");

	printf("Enter selection: ");

} // end displayMenu

int getSelection()
{
	int result;

	displayMenu();
	scanf_s("%i", &result);
	FLUSH;

	return result;
} // end getSelection

void flush()
{
	while (getchar() != '\n');
} // end flush