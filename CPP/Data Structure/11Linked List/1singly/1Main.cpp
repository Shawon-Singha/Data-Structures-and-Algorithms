#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};
int main(){
  struct Node *head,*newnode,*temp;
  head = 0;
   int choice;
   while (choice)
   {
        newnode = new Node;

      cout << "Enter the value : ";
      cin >> newnode->data;
      newnode->next = 0;

      if(head == NULL)
      {
        head = temp = newnode;
      }

      else
      {
        temp->next = newnode;
        temp = newnode;
      }

      cout << "Do you want to continue(0/1)";
      cin >> choice;
   }

   temp = head;

   while(temp != NULL)
   {
      cout << temp ->data << " ";
      temp = temp->next;
   }
   
  temp = head;
  while(temp != NULL){
    struct Node *current = temp;
    temp = temp->next;
    free(current);
  }
}