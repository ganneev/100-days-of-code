/*Q32: Write a program to check if a number is a palindrome.*/
#include <stdio.h>

int main() {
    int n;
    int original, rev = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    original = n;   
    while (n != 0) {
        remainder = n % 10; 
        rev = rev * 10 + remainder; 
        n /= 10; 
    }
    if (original == rev) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);

}
return 0;
}