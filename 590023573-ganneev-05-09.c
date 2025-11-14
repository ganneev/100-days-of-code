/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include <stdio.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;
    float amount = 1.0;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", simple_interest);

    float r = 1 + rate / 100;
    for (int i = 0; i < (int)time; i++) {
        amount *= r;
    }

    compound_interest = principal * amount - principal;
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}