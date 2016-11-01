void howFar()
{
	float mpg;
	float priceOfGas;
	float money;
	float distance;

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

	printf("You can travel %.2f miles.\n", distance);

}