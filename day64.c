// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, j, now = 0, wow = 0;
    int last[300];
    printf("Type word: ");
    scanf("%s", s);

    for(i = 0; i < 300; i++)
        last[i] = -1;
    for(i = 0; s[i] != '\0'; i++) {
        if(last[(int)s[i]] >= now)
            now = last[(int)s[i]] + 1;

        last[(int)s[i]] = i;

        if(i - now + 1 > wow)
            wow = i - now + 1;
    }

    printf("Largest part without copy letters: %d\n", wow);
    return 0;
}
