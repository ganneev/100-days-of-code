/*Q97: Print the initials of a name.*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i-1] == ' ' && name[i] != ' ' && name[i] != '\n') {
            printf("%c", name[i]);
        }
    }
    printf("\n");
    return 0;
}
