// call by reference
/*Reference variable doesn't have any memory ..
 it contains main value's memory..*/

 // Call by value..
/*In pass by value ,value will change in formal parameer ,not change in actual parametr..*/

#include<iostream> 
using namespace std;

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

   
}

int main(){
    int a = 20, b= 10;
     swap(a,b);

    cout << "Value of a is : " << a << endl
         << "Value of b is : " << b << endl;

    return 0;
}