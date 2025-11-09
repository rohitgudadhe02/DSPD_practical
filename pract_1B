#include <stdio.h>

int main() {
    int array[100], n, search;
    int start, end, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &search);

    start = 0;
    end = n;

    while(start < end) {
        for(int i = start; i < end; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        mid = (start + end) / 2;
        printf("Middle value: %d\n", array[mid]);

        if(array[mid] == search) {
            printf("Value found: %d\n", array[mid]);
            break;
        } else if(search > array[mid]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    if(start >= end) {
        printf("Value not found.\n");
    }

    return 0;
}
