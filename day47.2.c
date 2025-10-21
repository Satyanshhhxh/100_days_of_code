// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        if (str[i] == '\0')
            break;
        i++;
    }
    printf("The longest word is: %s\n", longest);
    printf("Length of the longest word: %d\n", maxLen);
    return 0;
}
