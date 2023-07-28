#include<iostream>
using namespace std;

void fun(int a[ ],int n)
// void fun(int *a,int n)
{

    a[0] = 0; //if change any value,effect on actual pararmeter...
    
    for(int i = 0;i<n;i++){
        cout << a[i] << endl;
    }
}

int main(){

    int a[] = {1,2,3,4,5};
    int n= 5;
    fun(a,n);

    return 0;
}