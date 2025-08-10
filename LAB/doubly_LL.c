// write a program in c to create a doubly linked list and print all the elements after creation

#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node {
        int data;
        struct node *prev;
        struct node *next;
    };

    struct node *head = NULL, *newnode, *temp;
    int choice = 1;

    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        if (!newnode) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }

        printf("Add another? (1 = yes, 0 = no): ");
        scanf("%d", &choice);
    }

    printf("Doubly linked list elements: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
