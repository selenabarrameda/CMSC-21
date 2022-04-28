#include <stdio.h>

#define ROWS 2
#define COLUMNS 3

int main(void){
	
	int row, col;
	int orig[ROWS][COLUMNS] = {
		{1, 5, 2},
		{3, 6, 4}
	};
	
	int transpose[COLUMNS][ROWS];
	
	printf("Original Matrix\n");
	for (row = 0; row < ROWS ; row++){
		for (col = 0; col < COLUMNS ; col++){
			printf("%d ", orig[row][col]);
			transpose[col][row] = orig[row][col];
		}
		printf("\n");
	}
	printf("Transposed Matrix\n");
	for (col = 0; col < COLUMNS ; col++){
		for (row = 0; row < ROWS ; row++){
			printf("%d ", transpose[col][row]);
		}
		printf("\n");
	}
	return 0;
}
