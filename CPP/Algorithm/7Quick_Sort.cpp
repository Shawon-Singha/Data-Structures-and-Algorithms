#include<iostream>
using namespace std;
void quickSort(int a[],int start,int end){
    if(start >= end){
        return;
    }

    int p;
    p = partition(a,start,end);
    quickSort(a,start,p-1);
    quickSort(a,p+1,end);
}

int main(){
    int a[7] = {10,15,1,2,4,16,11};
    quickSort(a,0,);
}