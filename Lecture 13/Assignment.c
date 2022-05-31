#include <stdio.h>
#include <math.h>

struct line{
	struct point{
		float x;
		float y;
	}point1, point2;
	
	float midpoint;
	float slope;
	float distance;
};

// define the functions to be used in this program
float solveSlope(struct line line1){
	float slope, num, denom;							// define variables
	
	num = line1.point2.y - line1.point1.y;				// subtract y1 from y2
	denom = line1.point2.x - line1.point1.x;			// subtract x1 from x2
	slope = num / denom;								// divide the computed values from above
	
	return slope;										// return value of slope
}

float solveMidpoint(struct line line1){					
	float x, y;											// define variables to be used in the function
	
	x = (line1.point1.x + line1.point2.x) / 2;			// get the sum of the 2 x's and divide it by 2
	y = (line1.point1.y + line1.point2.y) / 2;			// get the sum of the 2 y's and divide it by 2
	
	printf("Midpoint: (%f, %f) \n", x, y);				// show final answers
}

float solveDistance(struct line line1){
	float x, y, sum, square;							// define the variables
	 
	x = pow((line1.point2.x - line1.point1.x), 2);		// subtract the 2 x's from both points and square it
	y = pow((line1.point2.y - line1.point1.y), 2);		// subtract the 2 y's from both points and square it										
	square = sqrt(x + y);								// square root the sum of the computed values from above
	
	printf("Distance between 2 points: %f \n", square); // show final answer
}

void getSlopeInterceptForm(struct line line1){
	float x = line1.point1.x,							// define the variable using the value of x from point1
		  y = line1.point1.y,							// define the variable using the value of y from point1
		  m = solveSlope(line1),						// call the function to get the slope
		  b;
	
	// to search for b, plug in the values that already exist using this formula
	b = y - (m*x);					

	printf("y = %fx + %f", m, b);	// show the final answer
}



int main(){
	struct line line1;
	
	// Get values of points from user
	printf("Enter x and y for point1: ");
	scanf("%f %f", &line1.point1.x, &line1.point1.y);
	
	printf("Enter x and y for point2: ");
	scanf("%f %f", &line1.point2.x, &line1.point2.y);
	
	printf("\n");
	
	printf("Slope: %f \n", solveSlope(line1));	// call the function to solve for the slope of the 2 points
	//calling the function to answer the following:
	solveMidpoint(line1);						
	solveDistance(line1);
	getSlopeInterceptForm(line1);

}



