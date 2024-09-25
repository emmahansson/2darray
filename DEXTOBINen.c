#include <stdio.h>

int main(void){// A two-digit decimal number 
	int D, i;  //converting to binary.
	int G = 0; //to repeat the program
	int A[10];
	
	do{
		do{
			printf("Insert D (0 < D < 100)\n");
			scanf("%d", &D);
		}while(D<=0 || D >= 100);
		
		i=0;
		while(D>0){
			A[i] = D % 2;//finding the remainder
			D = D / 2;
			i++;
		}
		do{
			printf("%d", A[i-1]);
			i--;
		}while(i >= 1);
		printf("\n");
		printf("Whether to convert again? ");
		printf("Type 0 to exit the program\n");
		scanf("%d", &G);
	}while(G != 0);
	
	return 0;
}
