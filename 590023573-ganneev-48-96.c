/*Q96: Reverse each word in a sentence without changing the word order.*/
#include <stdio.h>
#include <string.h>
int main() {
    printf("Enter a sentence: ");
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);

    int len = strlen(sentence);
    if (sentence[len - 1] == '\n') sentence[len - 1] = '\0';

    int start = 0, end = 0;
    while (sentence[end] != '\0') {
        if (sentence[end] == ' ' || sentence[end + 1] == '\0') {
            int word_end = (sentence[end] == ' ') ? end - 1 : end;
            for (int i = word_end; i >= start; i--) {
                putchar(sentence[i]);
            }
            if (sentence[end] == ' ')
                putchar(' ');
            start = end + 1;
        }
        end++;
    }
    putchar('\n');
    return 0;
}