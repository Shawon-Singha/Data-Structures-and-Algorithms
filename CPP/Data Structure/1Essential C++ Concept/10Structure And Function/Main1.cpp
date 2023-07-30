
#include<iostream>
using namespace std;

struct Rectangle
{
    int length ,width;
};



int area(struct Rectangle r){
    return r.length *  r.width;
}

int parameter(struct Rectangle r){
    return 2 * r.length * r.width;
}

int main(){
   struct Rectangle r = { 0,0};

   cout << "Enter the length and width : " ;
   cin >> r.length >> r.width;

   int a = area(r);
   int peri = parameter(r);

   cout << " Area is : " << a << endl
        << " parameter is : " << peri << endl;

    return 0;
}