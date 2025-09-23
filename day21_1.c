// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, copy, multiple = 1, newNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    copy = num;
    last = num % 10;

    while (copy >= 10) {
        copy = copy / 10;
        multiple = multiple * 10;
    }
    first = copy;

    newNum = last * multiple + (num % multiple - last) + first;

    printf("Number after swapping first and last digit: %d\n", newNum);

    return 0;
}
