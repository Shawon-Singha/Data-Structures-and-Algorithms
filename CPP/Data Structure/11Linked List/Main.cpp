#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int main(){
   // struct Node *a =(struct Node*)malloc(sizeof(struct Node));
   // struct Node *b = (struct Node*)malloc(sizeof(struct Node));
   // struct Node *c = (struct Node*)malloc(sizeof(struct Node));

//    a = (struct Node*)malloc(sizeof(struct Node));
//    b = (struct Node*)malloc(sizeof(struct Node));
//    c = (struct Node*)malloc(sizeof(struct Node));

    //Memory allocate
   struct Node *a = new Node;
   struct Node *b = new Node;
   struct Node *c =  new Node;
   
   //Value store
   a->data = 10;
   b->data = 20;
   c->data = 30;

   //connect with next node
   a->next = b;
   b->next = c;
   c->next = NULL;

   while (a !=NULL)
   {
      cout << a->data << endl;
      a = a->next;
   }
   

   return 0;
}