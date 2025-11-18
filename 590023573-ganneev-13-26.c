/*Q26: Write a program to print numbers from 1 to n.*/
#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n >= 1) {
        for (i = 1; i <= n; i++) {
            printf("%d\n", i);
        }
    } else {
        printf("Please enter a positive integer.\n");
    }
    return 0;
}