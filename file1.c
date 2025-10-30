#include <stdio.h>
#include <string.h>
void plain();
void AdminMode();
void UserMode();
void plain(){
    int choice;
    printf("----------------Welcome to Medical Store---------------\n");
    printf("Please choose your identity\n");
    printf("1)Admin\n");
    printf("2)User\n");
    printf("Enter your choice(1 or 2): \n");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        AdminMode();
        break;
        case 2:
        UserMode();
        break;
        default:
        printf("Invalid choice! Please enter either 1 or 2\n");
        break;
    }
}
void AdminMode(){
    char symptom[100], medicine[100];
    char choice[5];
    printf("========ADMIN MODE=======\n");
    while(1){
        printf("Enter symptom: ");
        scanf(" %[^\n]",symptom);
        printf("Enter medicine for '%s': ",symptom);
        scanf(" %[^\n]",medicine);
        printf("Do you want to enter more symptoms? (yes/no): ");
        scanf("%s",choice);
        if(strcmp(choice,"no")==0 || strcmp(choice,"No")==0)
        break;
    }
    printf("\nReturning to main screen\n");
    plain();
}
void UserMode() {
    char symptom[100];
    printf("==========USER MODE=========\n");
    printf("Enter your symptom:\n");
    scanf(" %[^\n]",symptom);
    printf("Sorry, The database of symptoms and medicines is not available yet.\n");
    printf("Returning to main menu.\n");
    plain();
}
int main(){
    plain();
    return 0;
}