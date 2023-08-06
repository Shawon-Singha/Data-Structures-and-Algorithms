#include<iostream>
using namespace std;

// int x = 0; //both are same, this is global declaration...
int fun(int n){
    static int x = 0; // local declaration,but work as global declaration
    if(n>0){
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main(){
    int x = 5;
    cout << fun(x);
}