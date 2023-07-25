#include<iostream>
using namespace std;

struct  Rectangle
{
   int length;
   int breadth;
};

int main(){

    struct Rectangle r = { 10,5};

   cout << r.length << " " << r.breadth << endl;
   

   struct Rectangle *p = &r; // when indicate pointer to structure ,use arrow..

   cout << p->length  << " "
        << p->breadth << endl;
   
   

   return 0;
}