#include <stdio.h>

#define N_REVIEWERS 3
#define N_MOVIES 4

int main(){
	
	double sum_per_reviewer, ave_per_reviewer;
	int reviewer, movie;
	
	double ratings[N_REVIEWERS][N_MOVIES] = {
		{4, 6, 2, 5},
		{7, 9, 4, 9},
		{6, 9, 3, 7}
	};
	
	for (reviewer = 0; reviewer < N_REVIEWERS ; reviewer++){
		printf("Reviewer%d : ", reviewer + 1);
		sum_per_reviewer = 0;
		
		for (movie = 0; movie < N_MOVIES ; movie++){
			printf("%.0f ", ratings[reviewer][movie]);
			sum_per_reviewer += ratings[reviewer][movie];	
		}
		ave_per_reviewer = sum_per_reviewer / N_MOVIES;
		printf("--- Average %.1f", ave_per_reviewer);
		printf("\n");
	}
	return 0;
}
