#include<stdio.h>
#include<stdlib.h>
 
 typedef struct LinkedList {
    int data;
    struct LinkedList* next;
}list;
  list *newnode = NULL, *head = NULL, *temp = NULL, *tail = NULL; 

int n, value;
     void insertatbegain(){
     
     // Input the number of nodes
     printf("Enter the number of nodes: ");
     scanf("%d", &n);
     
     // Input the values of the nodes
     for (int i = 1; i <= n; i++) {
         printf("Enter the values of the node no %d :\n",i );
         newnode = (list*)malloc(  sizeof(list));
         if (newnode == NULL) {
             printf("Memory allocation failed\n");
             return ;  // Exit if memory allocation fails
            }
            scanf("%d", &value);
         newnode->data = value;
         newnode->next = NULL;
     
         if (head == NULL) {
             head = newnode;  // First node becomes the head
         } else {
             tail->next = newnode;  // Link the previous node to the current node
         }
         tail = newnode;  // Update the previous node
     }
    }
     void printList() {
     printf("Linked list: ");
        temp = head;  // Reset temp to head for traversal
        while(temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
        int main() {
    // Create the linked list
    insertatbegain();
    
    // Print the linked list    
    printList();
    
    return 0;
}
