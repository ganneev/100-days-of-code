/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *(using nested loops)*/
#include <stdio.h>
int main() {
    int i, j;
    int rows = 4;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++)
            putchar(' ');
        for (j = 1; j <= 2 * i - 1; j++)
            putchar('*');
        putchar('\n');
    }

    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++)
            putchar(' ');
        for (j = 1; j <= 2 * i - 1; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}