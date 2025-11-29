/*Q94: Find the longest word in a sentence.*/
#include <stdio.h>
#include <string.h>
int main() {
	char sentence[1000];
	char longestWord[1000] = "";
	char currentWord[1000] = "";
	int maxLen = 0, currentLen = 0;
	
	printf("Enter a sentence: ");
	fgets(sentence, sizeof(sentence), stdin);
	
	for (int i = 0; sentence[i] != '\0'; i++) {
		if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t') {
			currentWord[currentLen++] = sentence[i];
		} else {
			if (currentLen > 0) {
				currentWord[currentLen] = '\0';
				if (currentLen > maxLen) {
					maxLen = currentLen;
					strcpy(longestWord, currentWord);
				}
				currentLen = 0;
			}
		}
	}
	
	if (currentLen > 0) {
		currentWord[currentLen] = '\0';
		if (currentLen > maxLen) {
			strcpy(longestWord, currentWord);
		}
	}
	
	printf("Longest word: %s\n", longestWord);
	return 0;
}