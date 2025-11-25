/*Q85: Reverse a string.*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], reversed[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str [len - 1] = '\0';
        len--;
    }
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';
    printf("Reversed string: %s\n", reversed);
    return 0;
}