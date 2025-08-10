#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;

void insertAtEnd(int val) {
    Node* newNode = new Node{val, NULL};
    if (!head) head = newNode;
    else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}
void display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    int choice, val;
    do {
        cout << "1.Insert 2.Display 3.Exit: ";
        cin >> choice;
        if (choice == 1) { cin >> val; insertAtEnd(val); }
        else if (choice == 2) display();
    } while (choice != 3);
}
