//push means last In, First Out..

#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x){
    if (top < CAPACITY-1){
        top = top +1;
         stack[top] = x;
        printf("Successfully added item %d \n",x);
    }
    else{
        printf("No space.\n");
    }
}

int main(){
    
    push(10);
    push(20);
    push(30);
    push(40);

    return 0;
}