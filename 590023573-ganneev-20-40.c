/*Q40: Write a program to find the 1’s complement of a binary number and print it.*/
#include <stdio.h>
int main() {
    int binary, temp;
    int digit;
    int ones_complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    temp = binary;

    while (temp != 0) {
        digit = temp % 10; 
        if (digit == 0) {
            ones_complement += 1 * place; 
        }
        place *= 10; 
        temp /= 10; 
    }

    printf("1's complement of %d is: %d\n", binary, ones_complement);
    return 0;
}