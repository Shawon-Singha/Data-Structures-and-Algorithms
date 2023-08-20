#include<iostream>
using namespace std;

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

void display(struct Node *head) {
    struct Node *current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

int main() {
    struct Node *head = nullptr;
    struct Node *tail = nullptr;
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        int value;
        cin >> value;

        struct Node *newNode = new Node;
        newNode->data = value;
        newNode->prev = tail;
        newNode->next = nullptr;

        if (tail != nullptr) {
            tail->next = newNode;
        } else {
            head = newNode;
        }

        tail = newNode;
    }

    display(head);

    struct Node *current = head;
    while (current != nullptr) {
        struct Node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
