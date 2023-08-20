#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Number of nodes must be positive." << endl;
        return 1;
    }

    // Create the first node
    struct Node* head = new Node;
    struct Node* current = head;

    // Create and link the remaining nodes
    for (int i = 0; i < n; ++i) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> current->data;

        if (i < n - 1) {
            current->next = new Node;
            current = current->next;
        } else {
            current->next = nullptr;
        }
    }

    // Traversal variable
    current = head;

    cout << "Linked List Values:" << endl;
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    // Delete nodes
    current = head;
    while (current != nullptr) {
        struct Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
