/*Q98: Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = 0;
    
    int lastSpace = -1;
    for (int i = strlen(name) - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }
    if (lastSpace != -1) {
        for (int i = 0; i < lastSpace; i++) {
            if (i == 0 || name[i - 1] == ' ') {
                printf("%c.", name[i]);
            }
        }
        printf(" %s\n", &name[lastSpace + 1]);
    } else {
        printf("%s\n", name);
    }
    
    return 0;
}