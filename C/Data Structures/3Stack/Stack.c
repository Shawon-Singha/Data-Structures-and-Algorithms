#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x){
    if(top < CAPACITY - 1){
       top = top + 1;
      stack[top] = x;
      printf("Successfully added item number %d \n",x);
    }
    else{
        printf("Exception! No space.");
    }
}

int pop(){
    if(top >= 0){
        int val = stack[top];
        top = top -1;
        return val;
    }

    else{
        printf("Enception!pop");
    }

    return -1;
}

int peek(){
    if(top >= 0){
        return stack[top];
    }
        printf("Empty..\n");
    return -1;
}

int main(){
    peek();
     push(10);
     push(20);
     push(30);
     printf("Pop item : %d \n",pop());
     push(40);
     printf("Top of stack %d \n" ,peek());
    return 0;
}