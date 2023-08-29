#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head,*newnode;
     struct Node *a = new Node;
     struct Node *b= new Node;

     newnode = new Node;
     cout << " Enter the  new node's value : " ;
     cin >> newnode->data;
     newnode->next = head;
     head = newnode;

     a->data = 3;
     a->next = b;

     b->data = 4;
    b->next = NULL;

     while(a != NULL){
        cout <<a -> data << " ";
        a = a->next;
     }

    //  delete newnode;
     delete a;
     delete b;

     


     
}