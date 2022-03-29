#include <stdio.h>

int main(void){
	
	int days, beginning_num, space, row, n;
	
	printf("Enter number of days:");
	scanf("%d", &days);
	

	if (days >= 28 && days <= 31){
	
		printf("Enter the starting day of the week (1=Sun, 7=Sat):");
		scanf("%d", &beginning_num);
		
		for (row = 1; row < beginning_num; row++){
			printf("   ");
			}
		
		do{
			space = row % 8;
			
			if (space == 0){
				printf("\n");
			}
			else{
				printf("%2d ", n);
				n++;
			}
			row++; 
		} 
		while (n <= days);
	}
	
	else {
		printf("Invalid input");
	}
}
