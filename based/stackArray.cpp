#include <iostream>
using namespace std;

#define MAX 100
int stackArr[MAX], top = -1;

void push(int val) {
    if (top == MAX - 1) cout << "Overflow\n";
    else stackArr[++top] = val;
}
void pop() {
    if (top == -1) cout << "Underflow\n";
    else cout << "Popped: " << stackArr[top--] << "\n";
}
void display() {
    if (top == -1) cout << "Empty\n";
    else for (int i = top; i >= 0; i--) cout << stackArr[i] << " ";
    cout << "\n";
}

int main() {
    int choice, val;
    do {
        cout << "1.Push 2.Pop 3.Display 4.Exit: ";
        cin >> choice;
        if (choice == 1) { cin >> val; push(val); }
        else if (choice == 2) pop();
        else if (choice == 3) display();
    } while (choice != 4);
}
