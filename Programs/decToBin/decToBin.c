/* Jacob Butler
COP 1000
proj 1 contrib 1
description:
decimal to binary */

#include <stdlib.h>
#include <stdio.h>
void decToBin() {
	int usrNm, dstNm = 0, i = 1;
	printf("convert: "); scanf_s("%i", &usrNm);
	while (usrNm > 0) {                           // the mathy part
		dstNm += (usrNm % 2) * i;
		usrNm /= 2;
		i *= 10;
	}
	printf("answer: %i\n", dstNm);
}

int main() {
	system("cls");
	decToBin();
	system("pause");
	return 0;
}
