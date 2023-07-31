#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
   Rectangle(){
    length =0;
    width = 0;
   }

   Rectangle(int l,int w){
      length = l;
      width = w;
   }

   int area(){
    return length * width;
   }

   int peri(){
    return 2* (length + width);
   }

   void setLength(int l){
    length = l;
   }
   void setWidth(int w){
    width = w;
   }

   int getLength(){
    return length;
   }

   int getWidth(){
    return width;
   }

   ~Rectangle() 
   {
    cout << "It is a distructor." << endl;
   }
    
};




int main(){

    Rectangle r(10,5);

    cout << "Area is : "<< r.area() << endl
         << "Parameter is : " << r.peri()<< endl;

    r.setLength(20);
    r.setWidth(10);

    cout << "After changing length and width : " << endl;

    cout << "Area is : "<< r.area() << endl
         << "Parameter is : " << r.peri()<< endl;

    return 0;
}