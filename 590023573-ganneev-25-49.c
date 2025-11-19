/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345(using nested loops)*/
#include <stdio.h>
int main() {
    int i, j, k;
    for (i = 5; i >= 1; i--) {
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}