#include <stdio.h>
#include <math.h>
// this program gives the approximate value of the square root of a positive number
int main(void){
	
	// declare the variables
	int x, two = 2;
	double y = 1, diff = 1, tol = 0.00001, quo, Yn;  // set initial values for y and diff. tol is a constant number. 
	
	printf("Enter a positive number: ");  // ask user for input
	scanf("%d", &x);
	
	while (diff > tol){
		// iterative method to get the square root of a number
		quo = x / y;
		Yn = (quo + y) / two;
		diff = fabs(Yn - y);  // get the absolute value of the difference between Yn and y
		
		if (diff <= tol){  // to determine if the value of Yn is already the approximate answer to the inserted number (x)
			printf("The square root of %d is approximately %.5lf", x, Yn);  // round off the answer to five decimal pla
		}
		else{  // otherwise, set Yn to the variable y to solve the next value of Yn. 
			y = Yn;
		}
	}
}
