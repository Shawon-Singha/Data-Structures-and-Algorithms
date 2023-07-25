#include<iostream>
using namespace std;

int add (int a,int b) // formal parameter
{
   int c = a+b;

    return c;
}

int main(){
    int x,y,sum;
    x = 20;
    y = 10;
    sum = add(x,y); //Actual parameter

    cout << " Addition is : " << sum << endl;

     return 0;
}