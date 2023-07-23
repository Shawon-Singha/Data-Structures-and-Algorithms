#include<stdio.h>
#include<conio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = 0;

void push(int x){
    if (top < CAPACITY)
    {    
        stack[top] = x;
        printf("In index %d value Seccessfully added  %d\n",top,x);
        top++;
        
    }
    else{
        printf("No Space.\n");
    }
}


int pop(){
    if(top >=0){
        top--;
        int val = stack[top];
        
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