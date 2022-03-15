#include <stdio.h>

int main(void){
	
	int d1, d2, d3, rev;
	
	printf("Please insert a 3-digit number:");
	scanf("%1d%1d%1d", &d1, &d2, &d3);
	
	d3 *= 100;
	d2 *= 10;
	rev = d3 + d2 + d1;
	
	printf("Reverse: %d", rev);
}
