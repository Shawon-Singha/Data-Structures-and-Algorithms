#include<stdio.h>

int sum(int n){
    if(n==0)return 0;
    else return n + sum(n-1); 
}

int main(){
    int n;
    printf("Input the last number of the range starting from 1 :");
    scanf("%d",&n);

    int total = sum(n);
    printf("The sum of numbers from 1 to %d : %d\n",n,total);
    return 0;
}