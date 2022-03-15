#include <stdio.h>

int main(void){
	
	int digit1, digit2, rev; 
	
	printf("Please enter a 2-digit number:");
	scanf("%1d%1d", &digit1, &digit2);
	
	digit2 *= 10;
	rev = digit1 + digit2;
	
	printf("Reverse: %d", rev);
}
