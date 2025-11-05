// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int n;
    printf("Enter how many numbers you checking: ");
    scanf("%d", &n);
    int arr[n];
    printf("type numbers one by one:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sumNow = 0, maxSum = arr[0];

    for(int i = 0; i < n; i++) {
        sumNow = sumNow + arr[i];
        if(sumNow < arr[i]) {
            sumNow = arr[i];
        }
        if(sumNow > maxSum) {
            maxSum = sumNow;
        }
    }
    printf("The sum is: %d\n", maxSum);
    return 0;
}
