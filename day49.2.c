// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int lastSpace = -1;

    for (int i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    for (int i = 0; i < lastSpace; i++) {
        if (i == 0 || (name[i-1] == ' ' && name[i] != ' ')) {
            printf("%c", toupper(name[i]));
        }
    }

    if (lastSpace != -1) {
        printf(" ");
        for (int i = lastSpace + 1; i < len; i++) {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");
    return 0;
}
