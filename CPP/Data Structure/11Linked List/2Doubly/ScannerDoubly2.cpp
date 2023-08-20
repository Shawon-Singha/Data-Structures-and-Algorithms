#include <iostream>
using namespace std;

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = nullptr;

    // Take user input for the number of nodes in the linked list
    int numNodes;
    cout << "Enter the number of nodes: ";
    cin >> numNodes;

    if (numNodes <= 0) {
        cout << "Invalid number of nodes." << endl;
        return 1;
    }

    struct Node *prevNode = nullptr;

    // Create the linked list based on user input
    for (int i = 0; i < numNodes-1; i++) {
        struct Node *newNode = new Node;

        cout << "Enter data for node " << i + 1 << ": ";
        cin >> newNode->data;

        newNode->prev = prevNode;
        newNode->next = nullptr;

        if (prevNode != nullptr) {
            prevNode->next = newNode;
        } else {
            head = newNode; // Set the head for the first node
        }

        prevNode = newNode;
    }

    // Print the data in the linked list
    struct Node *current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    // Clean up memory by deleting all nodes
    current = head;
    while (current != nullptr) {
        struct Node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
