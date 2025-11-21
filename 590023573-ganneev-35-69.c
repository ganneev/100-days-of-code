/*Q69: Find the second largest element in an array.*/
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
    
    int first_largest = 0;
    int second_largest = 0; 
    
    for (i = 0; i < n; i++) {
        if (arr[i] > first_largest) {
            second_largest = first_largest;
            first_largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != first_largest) {
            second_largest = arr[i];
        }
    }
    
    if (second_largest == 0) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }
    
    return 0;
}