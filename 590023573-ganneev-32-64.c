/*Q64: Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>
int main() {
    int number, digit, i;
    int count[10] = {0};
    printf("Enter an integer number: ");
    scanf("%d", &number);
    while (number != 0) {
        digit = number % 10;
        count[digit]++;
        number /= 10;
    }
    int max_count = 0;
    int most_frequent_digit = -1;
    for (i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            most_frequent_digit = i;
        }
    }
    printf("The digit that occurs the most times is: %d (occurs %d times)\n", most_frequent_digit, max_count);
    return 0;
}