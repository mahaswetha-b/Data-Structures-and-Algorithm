#include <stdio.h>
#include <stdlib.h>

// Structure for tree node
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Create a new node
struct node* createnode(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// Create binary tree
struct node* createTree() {
    int value;
    printf("Enter node value (-1 for no node): ");
    scanf("%d", &value);

    if (value == -1)
        return NULL;

    struct node* root = createnode(value);

    printf("Enter left child of %d\n", value);
    root->left = createTree();

    printf("Enter right child of %d\n", value);
    root->right = createTree();

    return root;
}

// Postorder traversal (Left → Right → Root)
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node* root;

    printf("Create Binary Tree\n");
    root = createTree();

    printf("\nPostorder Traversal: ");
    postorder(root);

    return 0;
}
