/*Q27: Write a program to print the sum of the first n odd numbers.*/
#include <stdio.h>

int main() {
    int n;
    printf("PLease enter a positive number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1); 

}
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}