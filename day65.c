// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int letters[26] = {0};
    int i;

    printf("Write first word: ");
    scanf("%s", s);

    printf("Write second word: ");
    scanf("%s", t);

    if(strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }
    for(i = 0; s[i] != '\0'; i++) {
        letters[s[i] - 'a']++;
    }
    for(i = 0; t[i] != '\0'; i++) {
        letters[t[i] - 'a']--;
    }
    for(i = 0; i < 26; i++) {
        if(letters[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
