#include<stdio.h>

int main() {
	int i,j,k;
	
	for (i = 0; i < 10; i++) {

		for (j = 0; j < i; j++) {
			for (k = 0; k < j; k++) {
				printf(" ");
				printf("#");
			}
			printf("*");
			
		}
		printf("\n ");
	}

	for (i = 0; i < 10; i++) {

		for (j = 0; j < i; j++) {
			printf(" ");
			printf("*");
			//printf(" ");
		}
		printf("\n");
	}

	for (i = 0; i < 10; i++) {
		
		for (j = 0; j < i; j++) {
			printf("*");
			printf(" ");
		}
		printf("\n");
	}

	for (i = 0; i < 10; i++) {

		for (j = 0; j < i; j++) {
			printf("*");
			printf("   ");
		}
		printf("\n");
	}

	return 0;
}
