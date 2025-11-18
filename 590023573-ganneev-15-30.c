/*Q30: Write a program to reverse a given number.*/
#include <stdio.h>

int main() {
    int num;
    int reversed = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num != 0) {
        int digit = num % 10; 
        reversed = reversed * 10 + digit; 
        num /= 10; 
    }
    printf("The reversed number is: %d\n", reversed);

}