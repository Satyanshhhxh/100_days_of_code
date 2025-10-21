// Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>
#include <string.h>

int main() {
    char date[15], day[3], month[3], year[5];

    printf("Enter date (dd/04/yyyy): ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';

    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strcpy(year, date + 6);

    if (strcmp(month, "04") == 0)
        printf("Formatted date: %s-Apr-%s\n", day, year);
    else
        printf("This program only converts month 04 (April).\n");

    return 0;
}
