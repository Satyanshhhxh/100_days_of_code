// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 

#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0 to 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Oops! That's not a valid number.\n");
    } 
    else if (marks >= 90) {
        printf("Wow! You got Grade A+\n");
    } 
    else if (marks >= 80) {
        printf("Good job! Your Grade is A\n");
    } 
    else if (marks >= 70) {
        printf("Nice! Grade B\n");
    } 
    else if (marks >= 60) {
        printf("Okay! Grade C\n");
    } 
    else if (marks >= 50) {
        printf("You passed with Grade D\n");
    } 
    else {
        printf("You got Grade F\n");
    }

    return 0;
}
