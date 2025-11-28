/*Q89: Count frequency of a given character in a string.*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("The character '%c' appears %d times in the string.\n", ch, count);
    return 0;
}