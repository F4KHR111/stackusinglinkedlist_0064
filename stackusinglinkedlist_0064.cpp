#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

class stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }


    int push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        cout << "Push value: " << value << endl;
        return value;
    }

    void pop() {
            if (isEmpty()) {
            cout << "Stack is empty. " << endl;
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; // Update the top pointer to the next node

    }

    }
};
