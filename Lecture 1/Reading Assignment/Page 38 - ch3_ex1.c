#include <stdio.h> // To enable making use of the functions such as printf

int main(void){
	
	// Declare the variables 
	int i, j;
	float x, y;
	
	// Insert Values 
	i = 10;
	j = 20;
	x = 43.2892f; // "f" indicates that the number inserted is a float 
	y = 5527.0f;
	

	// "%d" - integer types, and "%f" - float numbers (having 6 decimal places)
	// "\n" indicates next line
	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y); // The letters after the closing quotation mark indicates the order of variables to be printed.
	
}
