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

void insertTail(Node *&head,int val){
  Node *newNode = new Node(val);

  if(head == NULL){
      head = newNode;
      return;
  }

  Node *temp = head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  } 
  //temp is in last node.

  temp->next = newNode;
}

void display(Node *head){
    Node *temp = head;


    cout << "Linked List value is : ";
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void position(Node *head,int pos,int value){
    Node *newnode = new Node(value);
    Node *temp = head;
    for(int i =1;i<=pos-1;i++){
        temp = temp->next;
    }

    newnode->next = temp->next;
     temp->next = newnode;
     cout << "Insert at position :" << pos;
}

int main(){
    Node *head = NULL;

    while(true){
        cout << " option 1 insert at tail : " << endl;
        cout << " option 2 display linked list : " << endl;
        cout << "Option 3,Insert at any position : " << endl;
        cout << " option 4 ,terminate : " << endl;

    int op;
    cin >> op;

    if(op == 1){
        cout << " Enter the value : ";
        int v;
        cin >> v;
        cout << endl;
        insertTail(head,v);
    }
    else if(op == 2){
        display(head);
        cout << endl;
    }

    if(op == 3){
        int pos,value;
        cout << "Enter the position : ";
        cin >> pos;
        cout << endl << "Enter the value : ";
        cin >> value;

        position(head,pos,value);
    }

    else if(op == 4){
        break;
    }
 }
    
    return 0;
}