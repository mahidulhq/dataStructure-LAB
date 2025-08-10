#include <iostream>
using namespace std;

#define MAX 100
int queueArr[MAX], front = 0, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) cout << "Overflow\n";
    else queueArr[++rear] = val;
}
void dequeue() {
    if (front > rear) cout << "Underflow\n";
    else cout << "Dequeued: " << queueArr[front++] << "\n";
}
void display() {
    if (front > rear) cout << "Empty\n";
    else for (int i = front; i <= rear; i++) cout << queueArr[i] << " ";
    cout << "\n";
}

int main() {
    int choice, val;
    do {
        cout << "1.Enqueue 2.Dequeue 3.Display 4.Exit: ";
        cin >> choice;
        if (choice == 1) { cin >> val; enqueue(val); }
        else if (choice == 2) dequeue();
        else if (choice == 3) display();
    } while (choice != 4);
}
