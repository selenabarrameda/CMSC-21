#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))  // define the total number of the array

int main(){
	// only pathway[0] & pathway[2] are true. If you did not set a value for the other positions, it is automated to give a zero. 
	bool pathway[8] = {[0] = 1, [2] = 1};
	
	// show whether the positions in the array are open or closed.
	for (int i = 0; i < NUM_PATHWAYS; i++){
		if (pathway[i]){
			printf("pathway [%d] is open \n", i);
		}else{
			printf("pathway [%d] is closed \n", i);
		}
	}
}

