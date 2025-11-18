/*Q34: Write a program to check if a number is prime.*/

#include <stdio.h>
int main() {
    int n;
    int is_prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        is_prime = 0; 
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0; 
                break;
            }
        }
    }
    if (is_prime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n); 
}
return 0;
}