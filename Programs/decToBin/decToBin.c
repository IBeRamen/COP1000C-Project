/* Jacob Butler
   COP 1000
   proj 1 contrib 1
   description:
    decimal to binary */

#include <stdlib.h>
#include <stdio.h>

void decToBin() {
  int usrNm, dstNm[500], i=0;
  printf("convert: "); scanf("%i",&usrNm);
  while(usrNm > 0) {
   dstNm[i] = usrNm % 2;
   usrNm /= 2;
   i++;
  }
  i--;
  printf("answer: ");
  for(i;i>=0;i--){
    printf("%i", dstNm[i]);  
  }
  printf("\n");
}
