//Write a program to calculate library fine based on late days as follows: 

#include <stdio.h>

int main() {
    int lateDays;
    int fine;


    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &lateDays);


    if (lateDays <= 0) {
        fine = 0;
        printf("No fine. returning on time!\n");
    }
    else if (lateDays <= 5) {
        fine = lateDays * 1; 
    }
    else if (lateDays <= 10) {
        fine = 5 * 1 + (lateDays - 5) * 2; 
    }
    else {
        fine = 5 * 1 + 5 * 2 + (lateDays - 10) * 5;
    }

    if (fine > 0) {
        printf("You have a fine of: %d units\n", fine);
    }

    return 0;
}
