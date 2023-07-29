#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int width;
};

void initial(struct Rectangle *r1,int a,int b){
    r1->length = a;
    r1->width = b;
}

int area(struct Rectangle r1){
    return r1.length * r1.width;
}

void changeLength(struct Rectangle *r1,int a){
    r1->length = a;
}


int main(){

     struct Rectangle r;

     initial(&r,10,5);
     cout  << "Length is : " << r.length << endl
           << "Width is : " << r.width << endl;

     area(r);
     cout << "Length is : " << r.length << endl
           << "Width is : " << r.width << endl;

      changeLength(&r,20);
      cout  << "Length is : " << r.length << endl
           << "Width is : " << r.width << endl;
     
    return 0;
}