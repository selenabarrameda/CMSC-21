#include <stdio.h>

int main(void){
	
	// declare the variables
	int n;  
	char decision;
	
	do{
		// Ask input from user
		printf("Enter a positive integer: ");
		scanf("%d", &n);  // Save to the int(type) variable
		
		// User inserted a correct value which is a positive integer
		if (n > 0){
			printf("The converted value is: ");
		
			// conversion of integer to roman numeral
			while (n > 0){
				// start with the highest value since writing roman numerals is in descending order
				if (n >= 1000){
		           printf("M");
		           n -= 1000;  // subtract the corresponding value of roman numeral "M" from the inserted integer
	       		}	
	
		        else if (n >= 900){
		           printf("CM");
		           n -= 900;  // subtract the corresponding value of roman numeral "CM" from the inserted integer
		        }        
		
		        else if (n >= 500){           
		           printf("D");
		           n -= 500;  // subtract the corresponding value of roman numeral "D" from the inserted integer
		        }
		
		        else if (n >= 400){
		           printf("CD");
		           n -= 400;  // subtract the corresponding value of roman numeral "CD" from the inserted integer
		        }
		
		        else if (n >= 100){
		           printf("C");
		           n -= 100;  // subtract the corresponding value of roman numeral "C" from the inserted integer                       
		        }
		
		        else if (n >= 90){
		           printf("XC");
		           n -= 90;  // subtract the corresponding value of roman numeral "XC" from the inserted integer                                             
		        }
		
		        else if (n >= 50){
		           printf("L");
		           n -= 50;  // subtract the corresponding value of roman numeral "L" from the inserted integer                                                                     
		        }
		
		        else if (n >= 40){
		           printf("XL");           
		           n -= 40;  // subtract the corresponding value of roman numeral "XL" from the inserted integer
		        }
		
		        else if (n >= 10){
		           printf("X");
		           n -= 10;  // subtract the corresponding value of roman numeral "X" from the inserted integer           
		        }
		
		        else if (n >= 9){
		           printf("IX");
		           n -= 9;  // subtract the corresponding value of roman numeral "IX" from the inserted integer                         
		        }
		
		        else if (n >= 5){
		           printf("V");
		           n -= 5;  // subtract the corresponding value of roman numeral "V" from the inserted integer                                     
		        }
		
		        else if (n >= 4){
		           printf("IV");
		           n -= 4;  // subtract the corresponding value of roman numeral "IV" from the inserted integer                                                            
		        }
		
		        else if (n >= 1){
		           printf("I");
		           n -= 1;  // subtract the corresponding value of roman numeral "I" from the inserted integer
				}
			}
			
			printf("\n Do you still want to continue? type \"y\" for yes and \"n\" for no: ");  // ask user if s/he still wants to continue using the program
			scanf(" %c", &decision);  // save to the char(type) variable
				
		}
		
		// user inserted a non-positive integer
		else {
			printf("Invalid input! \n");  // notify user 
			printf("Would you like to try again? type \"y\" for yes and \"n\" for no: ");  // ask user if s/he still wants to use the program
			scanf(" %c", &decision);  // save to the char(type) variable
		}		
	}
	// if the user still wants to continue using the program
	while (decision == 'y');
	
}
