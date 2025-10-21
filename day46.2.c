// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};
    char repeat = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                repeat = str[i];
                break;
            }
        }
    }

    if (repeat == '\0')
        printf("No repeating lowercase.\n");
    else
        printf("First repeating lowercase: %c\n", repeat);

    return 0;
}
