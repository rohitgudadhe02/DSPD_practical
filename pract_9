#include <stdio.h>

#define SIZE 7

int main() {
    int hashTable[SIZE];
    int n, key, index;

    for(int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("Enter number of keys to insert: ");
    scanf("%d", &n);

    printf("Enter %d keys:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &key);
        index = key % SIZE;

        while(hashTable[index] != -1) {
            index = (index + 1) % SIZE;
        }

        hashTable[index] = key;
    }

    printf("\nFinal Hash Table:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("Slot %d: ", i);
        if(hashTable[i] != -1)
            printf("%d\n", hashTable[i]);
        else
            printf("Empty\n");
    }

    return 0;
}
