void howFar()
{
	float mpg;
	float priceOfGas;
	float money;
	float distance;
	float timeStop;

	printf("Enter your average MPG: ");
	scanf_s("%f", &mpg);
	FLUSH;

	printf("The price of gas per gallon: ");
	scanf_s("%f", &priceOfGas);
	FLUSH;

	printf("How much money is on you now? ");
	scanf_s("%f", &money);
	FLUSH;

	distance = (money / priceOfGas) * mpg;
	timeStop = distance / mpg;

	printf("You can travel %.2f miles.\n", distance);

	// TODO: Add times to stop for gas
	

} // end howFar