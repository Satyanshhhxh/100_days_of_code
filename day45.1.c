// Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    if (count == 0)
        printf("character '%c' not appear in the string.\n", ch);
    else
        printf("character '%c' appears %d in the string.\n", ch, count);

    return 0;
}
