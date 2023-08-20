#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void creat(int a[],int n){
    int i;
    struct Node *t,*last;
    first = (struct Node*)malloc (sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++){
        t = (struct Node*)malloc (sizeof(struct Node));
        t->data= a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
    while(p != NULL){
        cout << p->data << endl;
        p = p->next;
    }
}

int main(){
    int a[] = {10,20,30,40,50};
    creat(a,5);
    display(first);

   return 0;
}