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

class Stack {
public:
    Node* top;
    int size;
    Stack() {
        this->top = NULL;
        this->size = 0;
    }

    void push(int data){
        Node* node = new Node(data);
        node->next = this->top;
        this->top = node;
        this->size++;
    }
    void pop() {
        Node* crnt_node = this->top;
        this->top = crnt_node->next;
        delete crnt_node;
        this->size--;
    }
    bool is_empty() {
        if(this->size==0) return true;
        else return false;
    }
    bool is_full() {
        if(this->size==10) return true;
        else return false;
    }
    int peek() {
        return this->top->data;
    }
};

int main()
{
    Stack stack;

    std::cout << "is_empty? " << stack.is_empty() << "\n";
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    std::cout << "is_empty? " << stack.is_empty() << "\n";
    stack.push(5);
    stack.push(6);
    stack.push(7);
    std::cout << "is_full? " << stack.is_full() << "\n";
    stack.push(8);
    stack.push(9);
    stack.push(10);
    std::cout << "is_full? " << stack.is_full() << "\n";
    stack.pop();
    std::cout << "peek? " << stack.peek() << "\n";
    std::cout << "Cpp_202212977_ChoiMinKyu";

}