// Adding 2 fractions 
#include <stdio.h> // To enable making use of the functions such as printf and scanf

int main(void){
	
	// Declare the variables
	int num1, denom1, num2, denom2, result_num, result_denom;
	
	// Ask input from user
	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1); // %d will take the inserted value and save it to the declared variable, respectively
	
	// Same process as above
	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2); 
	
	// Process of adding fractions
	result_num = num1 * denom2 + num2 * denom1; 
	result_denom = denom1 * denom2; 
	
	// The variables after the closing quotation mark will replace the "%d" inside the quotation mark, respectively
	// "\n" indicates next line
	printf("The sum is %d/%d\n", result_num, result_denom); 
	
	return 0; // indicates that code has successfully executed
}
