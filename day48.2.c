// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[200];
    int i = 0, wordStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, wordStart, i - 1);
            wordStart = i + 1;
        }
        if (str[i] == '\0')
            break;
        i++;
    }
    printf("Sentence with reversed words: %s\n", str);
    return 0;
}
