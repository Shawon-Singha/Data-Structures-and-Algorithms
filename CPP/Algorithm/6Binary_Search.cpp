#include<iostream>
using namespace std;

int binary_Search(int a[],int n,int key){
    int left = 0 , right = n-1;
    int mid;

    while (left <= right)
    {
       mid = (left+right) /2;
       if(a[mid] == key){
        
        return mid;
       }

       else if(a[mid] > key){
        left = mid -1;
       }

       else{
        right = mid +1;
       }
    }
    return -1;
}

int main(){
    int a[5] = {10,20,30,40,50};
    int b = 30;

    cout << "Key value is found. It is in index number : ";
    cout <<binary_Search(a,5,b);
}