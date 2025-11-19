/*Q37: Write a program to find the LCM of two numbers.*/
#include <stdio.h>
int main() {
    int a, b, lcm, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    for (lcm = max; ; lcm += max) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}