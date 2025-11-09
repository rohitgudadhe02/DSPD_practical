#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if(top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for(int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;

    while(1) {
        printf("\n1. Push\n2. Pop\n3. Check Overflow/Underflow\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
        } else if(choice == 2) {
            pop();
        } else if(choice == 3) {
            if(top == -1)
                printf("Stack Underflow\n");
            else if(top == MAX - 1)
                printf("Stack Overflow\n");
            else
                printf("Stack is in normal state\n");
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
