// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    int freq[n+1]; 
    
    for(int i = 0; i <= n; i++) {
        freq[i] = 0;
    }
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
        
        if(freq[arr[i]] > 1) {
            printf("Repeated element is: %d\n", arr[i]);
            return 0; 
        }
    }
    printf("No repetition found.\n");
    return 0;
}
