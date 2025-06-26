#include<stdio.h>
#include<stdlib.h>

int main() {

    // node structure
    struct Node {
        int data;
        struct Node* next;
    };

    // pointers
    struct Node* head = NULL;
    struct Node* current = NULL;
    struct Node* newNode = NULL;
    
    int n, value;

    // input
    printf("how many node: ");
    scanf("%d",&n);

    // core loop for linkedlist
    for(int i = 0; i < n; i++){
        newNode = (struct Node*)malloc(sizeof(struct Node));
        //malloc use for allocate memory
        printf("value for node %d: ",i+1);
        scanf("%d",&value);

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }


    // print
    printf("\nlinked list\n");
    current = head;
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;

    
}