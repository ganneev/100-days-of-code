/*Q92: Find the first repeating lowercase alphabet in a string.*/
#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	int freq[26] = {0};
	
	printf("Enter a string: ");
	scanf("%99s", str);
	
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			if (freq[str[i] - 'a'] > 0) {
				printf("First repeating character: %c\n", str[i]);
				return 0;
			}
			freq[str[i] - 'a']++;
		}
	}
	
	printf("No repeating character found\n");
	return 0;
}