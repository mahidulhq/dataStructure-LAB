#include <iostream>
#define MAX 100

class Queue {
    int arr[MAX];
    int front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    bool isFull() {
        return (rear == MAX - 1);
    }

    void enqueue(int x) {
        if (isFull()) {
            std::cout << "Queue Overflow\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        std::cout << x << " enqueued to queue\n";
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue Underflow\n";
            return;
        }
        std::cout << arr[front] << " dequeued from queue\n";
        front++;
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
            return;
        }
        std::cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            std::cout << arr[i] << " ";
        std::cout << "\n";
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
