#include<stdio.h>
#include<conio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x){
    if (top < CAPACITY-1)
    {    top++;
        stack[top] = x;
        printf("In index %d value Seccessfully added  %d\n",top,x);
        
        
    }
    else{
        printf("No Space.");
    }
}

int pop(){
    if(top >=0){
        int val = stack[top];
        top--;
        return val;
    }
    printf("Exception in pop.");
    return -1;
}

int main(){
  push(10);
  push(20);
  push(30);
  printf("Pop item : %d\n",pop());
  push(40);
  push(50);

  getch();
}