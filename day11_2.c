// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float CP, SP, amount;
    float percentage;

    printf("Enter the Cost Price (CP): ");
    scanf("%f", &CP);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &SP);

    if (SP > CP) {
        amount = SP - CP;
        percentage = (amount / CP) * 100;
        printf("Congratulations! You made a Profit of %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    }
    else if (SP < CP) {
        amount = CP - SP;
        percentage = (amount / CP) * 100;
        printf("Oops! You incurred a Loss of %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss. You broke even.\n");
    }
    return 0;
}
