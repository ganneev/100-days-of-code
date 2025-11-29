/*Q100: Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>
int main() {
    char s[1024];
    printf("Enter a string: ");
    if (fgets(s, sizeof s, stdin) == NULL) {
        return 0;
    }
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[--len] = '\0';
    }
    for (size_t i = 0; i < len; ++i) {
        for (size_t j = 1; j <= len - i; ++j) {
            printf("%.*s\n", (int)j, s + i);
        }
    }
    return 0;
}