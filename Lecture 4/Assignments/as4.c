#include <stdio.h>

int main(void){
	
	int i, n, two_to_the_n;
	
	printf("enter a number:");
	scanf("%d", &i);
	
	n = 0;
	
	do {
		if (n == 0){
			printf("%d 1 \n", n);
			two_to_the_n *= 2;
			n++;	
		}
		else {
			printf("%d %d \n", n, two_to_the_n);
			two_to_the_n *= 2;
			n++;
		}
	} while (n <= i);
}
