#include<iostream>
using namespace std;

struct Rectangle
{
   int length;
   int width;
};


/*in call by address ,just only formal parameter will change 
 actual parameter will remain same...*/

void area(struct Rectangle r1) // formal parameter..
{
    r1.length = 20; // here formal parameter value is changed ,not actual value ...
    
  cout << "Length is :  " << r1.length << endl
        << "Width is : " << r1.width << endl;
}



int main(){

    struct Rectangle r = { 10,5}; //actual parameter...
    area(r);

    cout << "Length is : " << r.length << endl
         << "Width is :  " << r.width << endl;
     return 0;
}