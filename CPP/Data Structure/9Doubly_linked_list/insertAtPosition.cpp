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

void atPosition(Node *head,int pos,int value){
    Node *newnode = new Node(value);

    Node *temp = head;
    for(int i = 1;i<=pos-1;i++){
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    newnode->next->prev = newnode;
    newnode->prev = temp;
}

void insertHead(Node *&head,Node *&tail,int value){
      Node *newnode = new Node(value);

      if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
      }
      newnode->next = head;
      head->prev = newnode;
}

void insertTail(Node *&tail,int value){
    Node *newnode = new Node(value);

    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;

}

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
    Node *c = new Node(40);

    head->next = a;
    a->prev =head;

    a->next = b;
    b->prev = a; 

    b->next = c;
    c->prev = b;

    Node *tail = c;

    int pos,value;
    cin >> pos >> value;
    insertHead(head,tail,value);
    insertTail(tail,value);

    // atPosition(head,3,100);
     
    display(head);
    cout << endl;
    displayreverse(tail);
    
    return 0;
}