#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newNode;
    int choice = 1, value;

    while (choice) {
        // Allocate memory for new node
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter value to insert: ");
        scanf("%d", &value);

        newNode->data = value;

        // Insert at beginning
        newNode->next = head;
        head = newNode;

        printf("Do you want to insert another node? (1/0): ");
        scanf("%d", &choice);
    }

    // Display the linked list
    printf("\nLinked List elements: ");
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
