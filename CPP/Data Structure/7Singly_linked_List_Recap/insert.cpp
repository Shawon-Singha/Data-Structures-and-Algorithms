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

void insert(Node *head,int pos,int value){
    Node *newnode =  new Node(value);
    Node *temp = head;

    for(int i = 1;i<=pos-1;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;

}

void insertHead(Node *&head,int value){
    Node *newnode = new Node(value);
   newnode->next = head; 
   head = newnode;    
}

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

    insert(head,2,100);

    printDisplay(head);
    return 0;
}