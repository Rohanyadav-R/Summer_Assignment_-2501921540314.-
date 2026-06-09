#include<stdio.h>
int main() {
	int i,j;
	int nst =1;
	for( i=1; i<=5; i++) {
		for( j=1; j<=5-i; j++) {
		    printf(" ");
		}
		for(int k=1;k<=nst;k++){
				printf("*");
		
		}
		nst = nst+2;
		printf("\n");
	}
	return 0;
}