#include <iostream>

#define MAX_SIZE 100

class Queue {
private:
    int front, rear, size;
    int elements[MAX_SIZE];

public:
    Queue() {
        front = rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == MAX_SIZE;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue more elements.\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        elements[rear] = value;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        size--;
    }

    int peek() {
        if (isEmpty()) {
            std::cerr << "Queue is empty. Cannot peek.\n";
            exit(EXIT_FAILURE);
        }
        return elements[front];
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return;
        }
        std::cout << "Queue: ";
        for (int i = front; i != rear; i = (i + 1) % MAX_SIZE) {
            std::cout << elements[i] << " ";
        }
        std::cout << elements[rear] << std::endl;
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

    q.enqueue(40);
    q.display();

    std::cout << "Front element: " << q.peek() << std::endl;

    return 0;
}
