#include <stdio.h>

int main() {
    int n, i, oddSum = 0, evenSum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    printf("Sum of numbers at even positions: %d\n", evenSum);
    printf("Sum of numbers at odd positions: %d\n", oddSum);
    return 0;
}
