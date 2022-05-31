#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

int  occurrences1[26] = {0};
int	 occurrences2[26] = {0};

void scan_word (int occurrences[26]){
	int i = 1;
	char c;
	
	while (i <= 2){
	
	int occurrences[26] = {0};
	printf("Enter word #%d: ", i);
	
	if (i == 1){
		while ((c = getchar()) != '\n') {
    	if (isalpha(c)){
        	occurrences[toupper(c) - 'A']++;
        	occurrences1[toupper(c) - 'A'] = occurrences[toupper(c) - 'A'];
    		}
		}	
	} else {
		while ((c = getchar()) != '\n') {
        if (isalpha(c)){
            occurrences[toupper(c) - 'A']--;
            occurrences2[toupper(c) - 'A'] = occurrences[toupper(c) - 'A'];
        	}
   		}	
	}
	
	i++; 
}
}

bool is_anagram (int occurrences1[26], int occurrences2[26]){
	int i;
	for (i = 0; i < 26; i++) {
		if (occurrences1 != occurrences2){
			return 0;
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
	

