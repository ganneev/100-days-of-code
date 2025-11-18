/*Q33: Write a program to check if a number is an Armstrong number.*/
#include <stdio.h>

int main() {
    int num, original, remainder, n = 0;
    int result = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    original = num;

    while (original != 0) {
        original /= 10;
        ++n;
    }
    original = num;

    while (original != 0) {
        remainder = original % 10;
        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        result += power;
        original /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}