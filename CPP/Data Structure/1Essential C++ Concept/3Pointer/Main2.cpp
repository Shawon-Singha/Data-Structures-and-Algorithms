#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;

    cout << a << endl 
        << "Using pointer :"<< *p << endl
        <<"Address of a : " << &a << endl;

    return 0;
}