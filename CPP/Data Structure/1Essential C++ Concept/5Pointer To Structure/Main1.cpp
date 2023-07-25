//Dynamically want to allocate memory...

#include<iostream>
using namespace std;

struct  Rectangle
{
   int length;
   int breadth;
};

int main(){

   struct  Rectangle *p;
   p = new Rectangle;

   p->length = 10;
   p->breadth = 5;

   cout << p->length << " "
        << p->breadth << endl;
   
   return 0;
}