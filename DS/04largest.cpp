#include<iostream>
using namespace std;

void largest(int array[],int x){
    int larg=array[0];

    for(int i=1;i<x;i++){
        if(larg < array[i])
            larg = array[i];
    }
    printf("%d\n",larg);

}


int main(){
    int n;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&n);

    int arr[n];
    printf("Input %d elements in the array:\n",n);
    for(int i=0;i<n;i++){
        printf("element-%d:",i);
        scanf("%d",&arr[i]);
    }
    printf("The largest element in the array is:");
    largest(arr,n);
    return 0;
}