// // write a program in c o delete an element from a given position by user of a singly linked list

#include<stdio.h>
#include<stdlib.h>

int main() {
    struct node {
        int data;
        struct node *next;
    };

    struct node *head = NULL, *newnode, *temp, *prev, *nextnode;
    int choice = 1, pos, i;

    // Creating LL
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
        return 0;
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos <= 0) {
        printf("Invalid position.\n");
        return 0;
    }

    temp = head;

    // Deleting f node
    if (pos == 1) {
        head = head->next;
        printf("Deleted element: %d\n", temp->data);
        free(temp);
    } else {
        i = 1;
        while (i < pos - 1 && temp != NULL) {
            temp = temp->next;
            i++;
        }

        if (temp == NULL || temp->next == NULL) {
            printf("Position out of range.\n");
        } else {
            nextnode = temp->next;
            temp->next = nextnode->next;
            printf("Deleted element: %d\n", nextnode->data);
            free(nextnode);
        }
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
