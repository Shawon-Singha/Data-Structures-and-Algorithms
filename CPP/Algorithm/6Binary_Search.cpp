#include<iostream>
using namespace std;

int binary_Search(int a[],int n,int x){
    int left = 0 , rigth = n-1;
    int mid;

    while (left <= rigth)
    {
       mid = (left+right) /2;
       if(a[mid] == x){
        return mid;
       }

       else if(a[mid] < x){
        left = mid +1;
       }

       else{
        right = mid -1;
       }
    }
    
}

int main(){
    int a[5] = {10,20,30,40,50};
    int b = 30;

    cout <<binary_Search(a,5,b);
}