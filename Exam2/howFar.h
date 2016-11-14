void howFar()
{

	float mpg, priceOfGas, money, distance, timeStopped;

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
	

} // end howFar