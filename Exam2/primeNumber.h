void showPrime()
{
	int primeNum = 4;

	printf("The prime numbers between 1 and 100 are: \n 1\n 3\n 5\n 7\n ");

	while (primeNum < 100)
	{
		primeNum = findPrime(primeNum);

		if (primeNum != 1)
			printf("%i\n ", primeNum);
		else
			primeNum = 101;
	}
} // end showPrime()

int findPrime(int primeNum)
{
	int result;

	do
	{
		primeNum++;

		if (primeNum == 100)
			primeNum = 1;

	} while (primeNum % 2 == 0 || primeNum % 3 == 0 || primeNum % 5 == 0 || primeNum % 7 == 0);

	result = primeNum;

	return(result);
} // end findPrime()