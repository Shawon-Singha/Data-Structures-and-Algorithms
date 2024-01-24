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

class myQueue{
   public: 

   Node* head = NULL;
   Node* tail = NULL;

   int sz = 0;

   void push(int val){
    sz++;
    Node* newnode = new Node(val);

    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
   }

   void pop(){
    sz--;
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;

    if(head == NULL){
        tail = NULL;
    }
   }

   int front(){
    return head->data;
   }

   int size(){
    return sz;
   }

   bool empty(){
    if(sz == 0) return true;
    else return false;
   }
};

int main(){

    myQueue q;

    int n;
    cin >> n;

    while (n--)
    {
         int x;
         cin >> x;

         q.push(x);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    
    
    
    return 0;
}