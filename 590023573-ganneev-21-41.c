/*Q41: Write a program to swap the first and last digit of a number.*/
#include <stdio.h>
int main() {
    int n, first, last, temp, digits = 0;
    int newNumber;
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;
    while (temp >= 10) { 
        temp = temp / 10;
        digits++;          
    }
    first = temp; 

    if (digits == 0) {
        newNumber = n;
    } else {
        int place = 1;
        for (int i = 0; i < digits; i++) {
            place = place * 10;
        }

        int middle = (n % place) / 10;
        newNumber = last * place + middle * 10 + first;
    }
    printf("After swapping first and last digit: %d\n", newNumber);
    return 0;
}
