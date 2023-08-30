#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head = nullptr; // Initialize head to nullptr
    struct Node *newnode = nullptr;
    struct Node *a = new Node;
    struct Node *b = new Node;

    newnode = new Node;
    cout << "Enter the new node's value: ";
    cin >> newnode->data;
    newnode->next = head; // Here, head is uninitialized, should be nullptr
    head = newnode;

    a->data = 3;
    a->next = b;

    b->data = 4;
    b->next = nullptr; // Use nullptr instead of NULL

    while (a != nullptr) { // Traverse the linked list starting from 'a'
        cout << a->data << " ";
        a = a->next;
    }

    // Delete dynamically allocated nodes before exiting
    delete newnode; // Instead of 'a' and 'b'
    delete a;       // You should delete 'newnode', 'a', and 'b' individually
    delete b;

    return 0; // Add a return statement to indicate successful execution
}
