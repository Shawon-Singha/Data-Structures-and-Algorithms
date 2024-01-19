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

int main(){
    Node *temp;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout << head->data << " "
    //      << head ->next->data << " "
    //      << head->next->next->data << " "

    //      << head ->next->next->next->data << " "
    //      << head->next->next->next->next->data << endl;

 temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";

       temp = temp->next;
    }
    return 0;
}