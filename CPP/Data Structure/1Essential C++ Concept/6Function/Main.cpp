#include<iostream>
using namespace std;

int add (int a,int b) // formal parameter
{
   int c = a+b;

    return c;
}

int main(){
    int x,y,z;
    x = 20;
    y = 10;
    z = add(x,y); //Actual parameter

    cout << " Addition is : " << z << endl;

     return 0;
}