/*Q17: Write a program to find the roots of a quadratic equation and categorize them.*/
#include <stdio.h>

float simple_sqrt(float n) {
    float x = n;        
    float guess = 1.0;  
    for (int i = 0; i < 10; i++) {
        x = (x + n / x) / 2;  
    }

    return x;
}

int main() {
    float a, b, c, d;
    float r1, r2, real, imag;

    printf("Enter a b c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;  

    if (d > 0) {
        float sq = simple_sqrt(d);
        r1 = (-b + sq) / (2*a);
        r2 = (-b - sq) / (2*a);

        printf("Roots are real.\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }
    else if (d == 0) {
        r1 = -b / (2*a);
        printf("Roots are same.\n");
        printf("Root = %.2f\n", r1);
    }
    else {
        float sq = simple_sqrt(-d); 
        real = -b / (2*a);
        imag = sq / (2*a);

        printf("Roots are complex.\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}
