/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *(using nested loops)*/
    #include <stdio.h>
    int main() {
        int i,j,k;
        for(i=1;i<=5;i++) {
            for(k=1;k<i;k++) {
                printf(" ");
                if(k==i-1) {
                    for(j=5;j>=i;j--) {
                        printf("*");
                        if(j==i) {
                            printf("\n");
                    }
                }
                
            }
        }
    }
    return 0;
}