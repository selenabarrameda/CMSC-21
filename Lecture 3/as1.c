#include <stdio.h>

int main(void){
	
	int age, teenager; 
	
	age = 10; // (can be modified)
	
	if (13 <= age <= 19){
		printf("is a teen");
		teenager = 1;
	}
	else{
		printf("is not a teen");
		teenager = 0;
	}		
}



