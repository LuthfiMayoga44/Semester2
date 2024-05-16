#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {

private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int data) {
        Node* new_node = new Node();
        new_node->data = data;
        new_node->next = nullptr;

        if (rear == nullptr) {
            front = rear = new_node;
            return;
        }

        rear->next = new_node;
        rear = new_node;
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;
    }

    int front_element() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

    bool is_empty() {
        return (front == nullptr);
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(4);
    q.enqueue(9);

    cout << "Front element is: " << q.front_element() << endl;

    q.dequeue();
    cout << "Front element is: " << q.front_element() << endl;

    q.dequeue();

    return 0;
}

