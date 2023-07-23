#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x){

    if(top < CAPACITY-1){
      top = top + 1;
      stack[top] = x;
      printf("Successfully added %d\n",x);
    }
    else{
        printf("NO space \n");
    }
}

int peek(){
    if(top >=0){
        return stack[top];
        
    }
  printf("Exception from peek\n");
return -1;
}

int main(){
    peek();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("Top of stack %d",peek());
}