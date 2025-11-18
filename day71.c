// Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main() {
    FILE *fp;
    char name[1000];
    int age;

    fp = fopen("info.txt", "w");

    printf("Enter your name: ");
    fgets(name, 100, stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %sAge: %d\n", name, age);

    fclose(fp);
    printf("Data successfully saved\n");

    return 0;
}
