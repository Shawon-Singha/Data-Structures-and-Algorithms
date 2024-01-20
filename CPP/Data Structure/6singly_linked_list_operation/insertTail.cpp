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

int main(){
    Node *head = NULL;

    while(true){
        cout << " option 1 insert at tail : " << endl;
        cout << " option 2 display linked list : " << endl;
        cout << " option 3 ,terminate : " << endl;

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

    else if(op == 3){
        break;
    }
 }
    
    return 0;
}