// write a program in c o delete an element from end of a singly linked list

#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node {
        int data;
        struct node *next;
    };

    struct node *head = NULL, *newnode, *temp, *prev;
    int choice = 1;

    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }

        printf("Do you want to continue? Press 1 for Yes, 0 for No: ");
        scanf("%d", &choice);
    }

    if (head == NULL) {
        printf("List is empty\n");
    } else {
        temp = head;
        prev = NULL;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == head) {
            head = NULL;
        } else {
            prev->next = NULL;
        }
        printf("Deleted element: %d\n", temp->data);
        free(temp);
    }

    printf("List after deletion: ");
    temp = head;
    if (temp == NULL) {
        printf("NULL\n");
    } else {
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }

    return 0;
}
