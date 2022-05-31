#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

int  occurrences1[26] = {0};
int	 occurrences2[26] = {0};

void scan_word (int occurrences[26]){
	int *word, *word1, *word2, i = 1;
	char c;
	
	word1 = occurrences1;
	word2 = occurrences2;
	word = occurrences;
	
	while (i != 3){
	
	int occurrences[26] = {0};
	printf("Enter word #%d: ", i);
	
	if (i == 1){
		while ((c = getchar()) != '\n') {
    	if (isalpha(c)){
        	(*(occurrences + (toupper(c) - 'A')))++;
        	*(occurrences1 + (toupper(c) - 'A')) = *(occurrences +(toupper(c) - 'A'));
    		}
		}	
	} else {
		while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            (*(occurrences + (toupper(c) - 'A')))--;
        	*(occurrences2 + (toupper(c) - 'A')) = *(occurrences +(toupper(c) - 'A'));
   		}	
	}
}
	i++; 

}
}

bool is_anagram (int occurrences1[26], int occurrences2[26]){
	int *word1, *word2, i;
	
	word1 = occurrences1;
	word2 = occurrences2;
	
	for (i = 0; i < 26; i++) {
		if (word1 != word2){
			return 0;
			word1++;
			word2++;
		}
	return 1;
}
}
	
int main (void){
	int i, same = 1;
	int	letters[26] = {0};
		
		scan_word(letters);
		
		same = is_anagram(occurrences1, occurrences2);
		
		if(same){
			printf("The words are anagrams.\n");
        	return 0;
    	}
		printf("The words are not anagrams.\n");
    	return 0;
    
}
	

