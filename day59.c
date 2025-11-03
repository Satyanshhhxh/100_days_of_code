// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter size of subarray (k): ");
    scanf("%d", &k);

    int maximumsum = 0, currentSum = 0;

    for(int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maximumsum = currentSum;

    for(int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];
        if(currentSum > maximumsum)
            maximumsum = currentSum;
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, maximumsum);

    return 0;
}
