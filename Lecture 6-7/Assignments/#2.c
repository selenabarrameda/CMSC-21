#include <stdio.h>
#define len ((int) (sizeof(letters) / sizeof(letters[0])))

int main(void){
	
	// Declare and create an array indicating the road network (or paths where each point can go to)
	// This will be the "inner" part of the matrix
	int road_networks [9][9] = {[1][1] = 1, [1][2] = 1, [1][6] = 1,
								[2][1] = 1, [2][2] = 1, [2][3] = 1,
								[3][2] = 1, [3][3] = 1, [3][5] = 1, [3][6] = 1,
								[4][4] = 1, [4][5] = 1,
								[5][4] = 1, [5][5] = 1,
								[6][1] = 1, [6][3] = 1, [6][6] = 1,
								[7][1] = 1, [7][4] = 1, [7][7] = 1,
								[8][6] = 1, [8][8] = 1 }; 
	
	// Put the letters (the "points") in an array as well.  
	// This will be the "outer" part of the matrix						
	char letters [9][9] = {[0][1] = 'A', [0][2] = 'B', [0][3] = 'C', [0][4] = 'D', [0][5] = 'E', [0][6] = 'F', [0][7] = 'G', [0][8] = 'H',
						   [1][0] = 'A', [2][0] = 'B', [3][0] = 'C', [4][0] = 'D', [5][0] = 'E', [6][0] = 'F', [7][0] = 'G', [8][0] = 'H'};
							
    int i, j;  // declare the variables that will be used for the rows and columns of the array, respectively. 
    
    // printing of the adjacency matrix
    for (i = 0; i < len; i++){
        for (j = 0; j < len; j++){
        	
            if((j == 3) && (i == 0) || (j == 4) && (i == 0)){        // To insert the brackets for stations C & D in the 0th row 
            	printf("[%c]\t", letters[i][j]);                     // Indicates that the point is a charging station
			}
            else if ((i == 3) && (j == 0) || (i == 4) && (j == 0)){  // To insert the brackets for stations C & D in the 0th column
            	printf("[%c]\t", letters[i][j]);					 // Indicates that the point is a charging station
			}
			else if ((i == 0) || (j == 0)){							 // Printing the rest of the points
				printf("%c\t", letters[i][j]);
			}
			else{
				printf("%d\t", road_networks[i][j]);				 // Printing of the road networks
			}
			if (j == 8){			// The next print will be on the next line
				printf("\n");		// For design purposes
			}	   
		}	
    }
    
    // Ask user his/her current location
	printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
	scanf("%d", &j);
	
	char location = letters[0][j+1];
	
	if ((j == 2) || (j == 3)){									// For the case of point C & D, which is already a charging station.
		printf("point: %c is a charging station", location);
	}
	else{
		// For the cases of A, B, E, F, G, & H
		printf("At point: %c \n", location);					// Print user's current location
		
		switch(location){
			// For the case of A, which is the only point that needs to get to another point before reaching a charging station
			// The points where C is the charging station
			case 'A':											
				printf("Now at point: B\n");
			case 'B':
			case 'F':
				printf("point: C is a charging station");
				break;
			
			// The points where D is the charging station
			case 'E':
			case 'G':
				printf("point: D is a charging station");
				break;
			
			// As for point H, it cannot go to either C or D. 
			case 'H':
				printf("No path to a charging station");
		}
	}	
}



