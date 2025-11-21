/*Q70: Rotate an array to the right by k positions.*/
#include <stdio.h>
void rotateRight(int arr[], int n, int k) {
    k = k % n; 
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int n, i, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);
    
    rotateRight(arr, n, k);
    
    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}