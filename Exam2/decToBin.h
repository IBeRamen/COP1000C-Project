void decToBin()
{
	int usrNm, dstNm = 0, i = 1;

	printf("Enter number to convert to binary: ");
	scanf_s("%d", &usrNm);
	FLUSH;

	while (usrNm > 0)
	{
		dstNm += (usrNm % 2) * i;
		usrNm /= 2;
		i *= 10;
	}
	printf("Binary: %d\n", dstNm);
}