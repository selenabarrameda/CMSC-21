#include <stdio.h>

int main(void){
	
	// declare variables
	int row, column = 0; 
	int size = 0 ; 
	char cont = 'y';  
	
	while(cont == 'y'){ 
		printf("Enter square size:");  // ask user for input
		scanf("%d", &size);            // save to a variable

		for (row = 0 ;row < size ; row++){
			for (column = 0 ;column <  size ;column++){ 
				if (row == 0 || row == size - 1|| column == 0|| column == size - 1){ 
				printf("*");  // asterisk will be printed throughout the first and last row & first and last of each column
				
				}else{ 
					printf(" ");  // print the "hole" in the middle of the square
				} 
			} 
			printf("\n");  // to continue on the next line 
		} 
		printf("Print another square? Enter y or n: ");  // ask user if s/he still wants to use the program
		scanf(" %c", &cont);
		
		//if the user does not want to use the program
		if (cont == 'n'){
			printf("END");  
		
		// user inserted a letter that is neither n or y	
		}else if (cont != 'y'){ 
			printf("Not a valid choice. \n"); 
			printf("Print another square? Enter y/n: ");  // give the user a second chance and ask again
			scanf("  %c", &cont); 
		} 
	}		 
	return 0; 
}

