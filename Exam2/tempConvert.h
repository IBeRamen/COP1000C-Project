void cTemp()
{
	double cTemp;
	float origTemp;

	CLS;

	printf("Enter the temperature for Celsius to Fahrenheit: ");
	scanf_s("%f", &origTemp);

	FLUSH;

	cTemp = (origTemp - 32) / 1.8;
	printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius\n", origTemp, cTemp);
} // end cTemp()

void displayTempMenu()
{
	CLS;

	printf("================= Convert Temp ==================\n");
	printf("C) Convert temperature from Fahrenheit to Celsius\n");
	printf("F) Convert temperature from Celsius to Fahrenheit\n");
	printf("Q) Quit Convert Temperature Menu\n");
	printf("=================================================\n");

	printf("Enter your selection: ");
} // end displayMenu()

void fTemp()
{
	double fTemp;
	float origTemp;

	CLS;

	printf("Enter the temperature for Fahrenheit to Celsius: ");
	scanf_s("%f", &origTemp);

	FLUSH;

	fTemp = 1.8 * origTemp + 32;
	printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit\n", origTemp, fTemp);
} // end fTemp()

char getTempChoice()
{
	char result;

	displayTempMenu();
	scanf_s("%c", &result);

	FLUSH;

	return toupper(result);
} // getTempChoice()