#include <stdio.h>

int main(void){
	
	int i = 1;
	
	while (i < 10){
		printf("a.) %d \n", i);
		i++;
	}
	
	for (; i < 10;){
		printf("b.) %d \n", i);
		i++;
	}
		
	do {
		printf("c.) %d \n", i);
		i++;
			
	} while (i < 10);
}
