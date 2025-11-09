//aim :Design, Develop and Implement a menu driven Program in C for the following operations on QUEUE of Characters (Array Implementation of Queue with maximum size MAX)
a. Insert an Element on to QUEUE
b. Delete an Element from QUEUE
c. Demonstrate Overflow and Underflow situations on QUEUE
d. Display the status of QUEUE
e. Exit
Support the program with appropriate functions for each of the above operations.//

#include <stdio.h>

#define MAX 5

char queue[MAX];
int front = -1, rear = -1;

void insert(char item) {
    if(rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = item;
        printf("%c inserted into queue\n", item);
    }
}

void delete() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("%c deleted from queue\n", queue[front]);
        front++;
    }
}

void display() {
    if(front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements:\n");
        for(int i = front; i <= rear; i++) {
            printf("%c ", queue[i]);
        }
        printf("\n");
    }
}

void checkStatus() {
    if(front == -1 || front > rear)
        printf("Queue Underflow\n");
    else if(rear == MAX - 1)
        printf("Queue Overflow\n");
    else
        printf("Queue is in normal state\n");
}

int main() {
    int choice;
    char item;

    while(1) {
        printf("\n1. Insert\n2. Delete\n3. Check Overflow/Underflow\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter character to insert: ");
            scanf(" %c", &item);
            insert(item);
        } else if(choice == 2) {
            delete();
        } else if(choice == 3) {
            checkStatus();
        } else if(choice == 4) {
            display();
        } else if(choice == 5) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
//output //
// --- Queue Operations Menu ---
1. Insert an Element
2. Delete an Element
3. Display Queue
4. Exit
Enter your choice: 1
Enter character to insert: A
Inserted 'A' into the queue.

--- Queue Operations Menu ---
Enter your choice: 1
Enter character to insert: B
Inserted 'B' into the queue.

--- Queue Operations Menu ---
Enter your choice: 3
Queue contents: A B

--- Queue Operations Menu ---
Enter your choice: 2
Deleted 'A' from the queue.

--- Queue Operations Menu ---
Enter your choice: 2
Deleted 'B' from the queue.

--- Queue Operations Menu ---
Enter your choice: 2
Queue Underflow! No element to delete.

--- Queue Operations Menu ---
Enter your choice: 1
Enter character to insert: X
Inserted 'X' into the queue.

--- Queue Operations Menu ---
Enter your choice: 1
Enter character to insert: Y
Inserted 'Y' into the queue.

--- Queue Operations Menu ---
Enter your choice: 1
Enter character to insert: Z
Inserted 'Z' into the queue.

--- Queue Operations Menu ---
Enter your choice: 1
Enter character to insert: M
Inserted 'M' into the queue.

--- Queue Operations Menu ---
Enter your choice: 1
Enter character to insert: N
Inserted 'N' into the queue.

--- Queue Operations Menu ---
Enter your choice: 1
Enter character to insert: O
Queue Overflow! Cannot insert 'O'

--- Queue Operations Menu ---
Enter your choice: 4
Exiting program.//
