/*	Written by: Omar Rahman
*	Date: 10/24/2016 @11:53AM EST
*	Purpose: Exam 2 - Group Project (howFar)
*/

#include <stdio.h>
#include <stdlib.h>

#define PAUSE system("pause");
#define CLS system("cls");
#define FLUSH flush();

void getSelection();
void flush();

int main()
{

	getSelection();

	PAUSE;
}

void flush()
{
	while (getchar() != '\n');
} // end of flush

void getSelection()
{
	float mpg, priceOfGas, money, distance, timeStopped;

	CLS;

	printf("Enter your average MPG: ");
	scanf_s("%f", &mpg);
	FLUSH;

	printf("The price of gas per gallon: ");
	scanf_s("%f", &priceOfGas);
	FLUSH;

	printf("How much money is on you now? ");
	scanf_s("%f", &money);

	distance = (money / priceOfGas) * mpg;

	printf("You can travel %.2f miles.\n", distance);

	timeStopped = 20 / (money / priceOfGas);

	printf("You have to stop %.2f times.\n", timeStopped - 1);

	FLUSH;

}