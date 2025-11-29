/*Q95: Check if one string is a rotation of another.*/
#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
	if (strlen(s1) != strlen(s2)) {
		return 0;
	}
	char temp[strlen(s1) * 2 + 1];
	strcpy(temp, s1);
	strcat(temp, s1);
	return strstr(temp, s2) != NULL;
}

int main() {
	char str1[100], str2[100];
	printf("Enter the first string: ");
	scanf("%s", str1);
	printf("Enter the second string: ");
	scanf("%s", str2);
	if (isRotation(str1, str2)) {
		printf("\"%s\" is a rotation of \"%s\"\n", str2, str1);
	} else {
		printf("\"%s\" is not a rotation of \"%s\"\n", str2, str1);
	}
	
	return 0;
}