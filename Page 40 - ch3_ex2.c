// Prints int and float values in various formats
#include <stdio.h> // To enable making use of the functions such as printf 

int main(void){
	
	// Declare the variables
	int i;
	float x;
	
	// Set values
	i = 40;
	x = 839.21f; // "f" indicates that the number inserted is a float
	
	
	/* "%d"- integer types, "%f"- float numbers (having 6 decimal places), "%e"- exponent, and "%g"- floating-point number
	The numbers that is inserted in-between shows how many characters should be printed
	The number after the period indicates how many decimal places there should be
	"-" indicates that number will be inserted first before the (added) spaces to satisfy the desired number of characs */
	
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); // The letters after the closing quotation mark will replace the characters with "%", respectively
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);  // "\n" indicates next line
	
	return 0; // indicates that code has successfully executed
}
