// Pass by value..
/*In pass by value ,value will change in formal parameer ,not change in actual parametr..*/

#include<iostream> 
using namespace std;

int swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << x << endl
         << y << endl;

    return x,y;
}

int main(){
    int a = 20, b= 10;
    int sum = swap(a,b);

    cout << sum << endl;

    cout << "Value of a is : " << a << endl
         << "Value of b is : " << b << endl;

    return 0;
}