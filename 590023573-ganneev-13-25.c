/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
#include <stdio.h>

int main() {
    char op;
    int num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch(op) {
        case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
        case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
        case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
        case '/':
        if(num2 != 0) {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n"); 
            break;   
        };
        return 0;
};
}