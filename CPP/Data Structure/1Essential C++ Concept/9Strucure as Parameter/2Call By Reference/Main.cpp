#include<iostream>
using namespace std;

struct Rectangle
{
   int length;
   int width;
};


/*in call by reference ,just actual parameter both will allocate memory,
  and formal parameter will on that same allocated memory..
*/

 

void area(struct Rectangle &r1) // formal parameter..
{
    r1.length = 20; // here formal parameter value is changed  .
    
  cout << endl << "Inside the formal parameter " << endl;
  cout << "Length is :  " << r1.length << endl
        << "Width is : " << r1.width << endl;
}

int main(){

    struct Rectangle r = { 10,5}; //actual parameter...

    cout << "Here the actual parameter value .." << endl;
    cout << "Length is : " << r.length << endl
         << "Width is :  " << r.width << endl;
    
     
    area(r);

    cout << endl  << "After change the formal parameter value " << endl;
    cout << "Length is : " << r.length << endl // here actual parameter value is changed
         << "Width is :  " << r.width << endl;
     return 0;
}