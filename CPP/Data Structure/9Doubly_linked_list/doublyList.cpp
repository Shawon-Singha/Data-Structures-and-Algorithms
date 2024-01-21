#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node *prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void display(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void displayreverse(Node *tail){
    Node *temp = tail;

    while(tail != NULL){
        cout << tail->data << " ";
        tail = tail->prev;
    }
}

int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->prev =head;

    a->next = b;
    b->prev = a; 

    Node *tail = b;
     
    display(head);
    cout << endl;
    displayreverse(tail);
    
    return 0;
}