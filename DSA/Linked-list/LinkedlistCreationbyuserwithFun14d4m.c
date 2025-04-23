#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;               // Data part of the node
    struct Node* next;      // Pointer to the next node
};

// Function to create a new node with given value
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));  // Allocate memory for new node
    newNode->data = value;     // Set data
    newNode->next = NULL;      // Initialize next to NULL
    return newNode;            // Return pointer to the new node
}

// Function to print the linked list
void printList(struct Node* head) {
    printf("Linked List: ");
    while (head != NULL) {              // Traverse the list till the end
        printf("%d -> ", head->data);   // Print data of current node
        head = head->next;              // Move to next node
    }
    printf("NULL\n");                   // End of list
}

int main() {
    int n, value;
    struct Node *head = NULL;  // Pointer to head of the list
    struct Node *temp = NULL;  // Temporary pointer for creating nodes
    struct Node *prev = NULL;  // Pointer to keep track of the last node

    // Ask user how many nodes to create
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Loop to create n nodes
    for(int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);

        temp = createNode(value);  // Create a new node with given value

        if (head == NULL) {
            head = temp;           // If list is empty, first node becomes the head
        } else {
            prev->next = temp;     // Otherwise, link the last node to the new node
        }

        prev= temp;               // Update the last node to the newly created node
    }

    // Print the complete linked list
    printList(head);

    return 0;
}
