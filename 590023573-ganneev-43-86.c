/*Q86: Check if a string is a palindrome.*/
#include <stdio.h>
#include <string.h>

int is_palindrome(char* str) {
    int length = strlen(str);
    int i;
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }
    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    if (is_palindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
    return 0;
}
