#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
public:
    Node* front;
    Node* rear;
    int size;
    Queue() {
        this->front = NULL;
        this->rear = NULL;
        this->size = 0;
    }

    bool is_empty() {
        if(this->size==0) return true;
        else return false;
    }

    bool is_full() {
        if(this->size==10)  return true;
        else return false;
    }

    void push(int data) {
        Node* node = new Node(data);
        if(this->front==NULL&&this->front==NULL) {
            this->front = node;
            this->rear = node;
            this->size++;
        }
        else {
            this->rear->next = node;
            this->rear = node;
            this->size++;
        }
    }

    int pop() {
        Node* crnt_node = this->front;
        int data = crnt_node->data;
        this->front = crnt_node->next;
        delete crnt_node;
        return data;
    }

    int peek() {
        return this->front->data;
    }
};

int main() {
    Queue q;

    std::cout << "is_empty? " << q.is_empty() << "\n";
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    std::cout << "is_empty? " << q.is_empty() << "\n";
    q.push(5);
    q.push(6);
    q.push(7);
    std::cout << "is_full? " << q.is_full() << "\n";
    q.push(8);
    q.push(9);
    q.push(10);
    std::cout << "is_full? " << q.is_full() << "\n";
    std::cout << "pop? " << q.pop() << "\n";
    std::cout << "peek? " << q.peek() << "\n";

}