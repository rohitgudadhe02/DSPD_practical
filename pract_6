#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* insert(struct Node* root, int value) {
    if(root == NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if(value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

void search(struct Node* root, int value) {
    while(root != NULL) {
        if(value == root->data) {
            printf("Found\n");
            return;
        } else if(value < root->data) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    printf("NULL\n");
}

struct Node* deleteLeaf(struct Node* root, int value) {
    if(root == NULL)
        return NULL;
    if(value < root->data)
        root->left = deleteLeaf(root->left, value);
    else if(value > root->data)
        root->right = deleteLeaf(root->right, value);
    else {
        if(root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        } else {
            printf("Not a leaf node\n");
        }
    }
    return root;
}

int main() {
    struct Node* root = NULL;
    int choice, value;

    while(1) {
        printf("\n1. Search\n2. Insert\n3. Delete Leaf\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter value to search: ");
            scanf("%d", &value);
            search(root, value);
        } else if(choice == 2) {
            printf("Enter value to insert: ");
            scanf("%d", &value);
            root = insert(root, value);
        } else if(choice == 3) {
            printf("Enter leaf value to delete: ");
            scanf("%d", &value);
            root = deleteLeaf(root, value);
        } else if(choice == 4) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
