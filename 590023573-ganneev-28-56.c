/*Q56: Read and print elements of a one-dimensional array*/
#include <stdio.h>
int main() {
	int n, i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the elements:\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Elements of the array:\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	
	return 0;
}