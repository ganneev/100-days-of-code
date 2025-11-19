/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
**/
#include <stdio.h>
int main() {
	int n = 5; 
	int i, j, k;

	for (i = 1; i <= n; i++) {
		k = 2 * i - 1;
		for (j = 0; j < k; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	for (i = n - 1; i >= 1; i--) {
		k = 2 * i - 1;
		for (j = 0; j < k; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}