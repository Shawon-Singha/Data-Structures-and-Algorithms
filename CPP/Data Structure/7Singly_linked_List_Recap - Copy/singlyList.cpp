#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printDisplay(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";

        temp = temp->next;
    }
}

int main(){

    Node *head = new Node(5);
    Node *a = new Node(10);
    Node *b  = new Node(30);
    Node *c  = new Node(40);
    Node *d  = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    printDisplay(head);
    return 0;
}