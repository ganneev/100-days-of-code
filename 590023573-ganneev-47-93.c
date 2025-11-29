/*Q93: Check if two strings are anagrams of each other.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s1[1000], s2[1000];
	printf("Enter the two strings: ");
	if (!fgets(s1, sizeof s1, stdin)) return 0;
	if (!fgets(s2, sizeof s2, stdin)) return 0;

	size_t n1 = strlen(s1);
	if (n1 > 0 && s1[n1 - 1] == '\n') {
		s1[--n1] = '\0';
	}
	size_t n2 = strlen(s2);
	if (n2 > 0 && s2[n2 - 1] == '\n') {
		s2[--n2] = '\0';
	}

	int freq[256] = {0};
	for (size_t i = 0; i < n1; ++i) {
		unsigned char c = (unsigned char)s1[i];
		if (isspace(c)) continue;
		c = (unsigned char)tolower(c);
		freq[c]++;
	}
	for (size_t i = 0; i < n2; ++i) {
		unsigned char c = (unsigned char)s2[i];
		if (isspace(c)) continue;
		c = (unsigned char)tolower(c);
		freq[c]--;
	}

	for (int i = 0; i < 256; ++i) {
		if (freq[i] != 0) {
			printf("Not anagrams\n");
			return 0;
		}
	}

	printf("Anagrams\n");
	return 0;
}