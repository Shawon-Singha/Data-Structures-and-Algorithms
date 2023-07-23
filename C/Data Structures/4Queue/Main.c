#include<stdio.h>
#include<stdbool.h>

#define CAPACITY 5;

int queue[CAPACITY];

int front = 0,rear = -1 ,total = 0;

bool isFull(){
    if(total == CAPACITY){
        return true;
    }
    else {
        return false;
    }
}

bool isEmpty(){
    if(total == 0){
        return true;
    }

    else{
        return false;
    }
}

void enqueue(int item){
   if ((isFull))
   {
    printf("Sorry ,Queue is full.");
    return;

   }

   rear = (rear + 1) % CAPACITY;
   queue[rear] = item;
   total++;
 
}

int dequeue(){

    return 0;
}

void printQueue(){
    printf("Queue : ");

    for (int i = 0; i < CAPACITY; i++)
    {
        printf("%d ",queue[i]);
    }

    printf("\n");
    
}

int main(){

    enqueue(10);


    return 0;
}