#include <stdio.h>

int main(void){
	
	// define variables 
	char shape, formula;
	int perimeter, area_r, twice, l, w, a, b, c, h; 
	float area_t, half;  
	
	// ask user for input
	printf("Which shape do you want to compute for? Type \"t\" for triangle or \"r\" for rectangle:");
	scanf("%c", &shape);  
	
	// if user chose rectangle:
	if (shape == 'r'){
		
		// ask user for input
		printf("What do you want to compute for? Type \"p\" for perimeter or \"a\" for area:");
		scanf(" %c", &formula);
		
		// ask user for measurements of the rectangle
		printf("Insert value of length & width (separated by a comma e.g. l,w):");
		scanf("%d,%d", &l, &w);  

		switch (formula){
			// computing for the perimeter
			case 'p':
				twice = 2;
				
				perimeter = twice * (l + w);  // formula for the perimeter of rectangle
				printf("The perimeter of your rectangle with a length of %d and a width of %d is %d", l, w, perimeter);  // print result
				break;
			
			// computing for the area
			case 'a':
				area_r = l * w;  // formula for the area of rectangle 
				printf("The area of your rectangle with a length of %d and a width of %d is %d", l, w, area_r);  // print result
				break;
				
			// if user inserted neither p nor a
			default:
				printf("Error! You have inserted a wrong letter that is neither \"p\" nor \"a\"");
		}	
	}
	// if user chose triangle:
	else if (shape == 't'){
		
		// ask user for input
		printf("What do you want to compute for? Type \"p\" for perimeter or \"a\" for area:");
		scanf(" %c", &formula);  
	
		switch (formula){
			// computing for the perimeter
			case 'p':
				// ask user for the needed values
				printf("Insert value of the sides a, b & c (separated by a comma e.g. a,b,c):");
				scanf("%d,%d,%d", &a, &b, &c);
				
				perimeter = a + b + c;  // formula for the perimeter of a triangle
				
				printf("The perimeter of your triangle with the sides %d, %d, & %d is %d", a, b, c, perimeter);  // print results
				break;
			
			// computing for the area
			case 'a':
				// ask user for the needed values
				printf("Insert value of base and height (separate by a comma e.g. b,h):");
				scanf("%d,%d", &b, &h);
				
				half = 0.5;
				
				area_t = (b * h * half);  // formula for the area of a triangle
				
				printf("The area of your triangle with the base of %d, and a height of %d is %f", b, h, area_t);  // print results
				break;
				
			// if user inserted neither p nor a
			default:
				printf("Error! You have inserted a wrong letter that is neither \"p\" nor \"a\"");	
		} 
	}
	// if user inserted a wrong letter 
	else {
		printf("Error! You have inserted a wrong letter that is neither \"t\" nor \"r\"");
	}
}
