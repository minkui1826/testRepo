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
}