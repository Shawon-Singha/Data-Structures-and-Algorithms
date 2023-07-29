//returning a pointer to structure...
// After watching 1,2,3 folder, then watch this... 
#include<iostream>
using namespace std;

struct Rectangle
{
   int length;
   int width;
};


struct Rectangle *fun()
{
   struct Rectangle *p;
   p = new Rectangle;

   p -> length = 20;
   p -> width = 10;

   return p;
};

int main(){
    struct Rectangle *ptr = fun();

    cout << "Length : " << ptr -> length << endl
         << " Width : " << ptr -> width << endl;
    
     return 0;
}