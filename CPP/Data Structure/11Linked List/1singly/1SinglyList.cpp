#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

int main(){
   //memory allocate using c..
    struct Node *a =(struct Node*)malloc(sizeof(struct Node));
   struct Node *b = (struct Node*)malloc(sizeof(struct Node));
   struct Node *c = (struct Node*)malloc(sizeof(struct Node));

   
   //Value store
   a->data = 5;
   b->data = 6;
   c->data = 7;

   //connect with next node
   a->next = b;
   b->next = c;
   c->next = NULL;

   printf ("Data enter in the list :");

   while (a != NULL)
   {
      printf("%d ", a->data );
      a = a->next;
   }

   delete a;
   delete b;
   delete c;

   return 0;
}
