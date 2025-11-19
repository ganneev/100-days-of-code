/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms*/
#include <stdio.h>
int main() {
	int n;
	if (printf("Enter number of terms: "), fflush(stdout), scanf("%d", &n) != 1 || n <= 0) {
		printf("Invalid input\n");
		return 1;
	}

	double sum = 0.0;
	for (int i = 1; i <= n; i++) {
		double num = 2.0 * i;
		double den = 4.0 * i - 1.0;
		sum += num / den;
	}

	printf("Sum of series up to %d terms = %.6f\n", n, sum);
	return 0;
}