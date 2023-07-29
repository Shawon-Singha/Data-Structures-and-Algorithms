#include<iostream>
using namespace std;


class Rectangle
{  
    private : 

    int length;
    int width;

   public : 

    void initial(int a,int b){
        length = a;
        width = b;
    }

    int area(){
        return length * width;
    }

    void changeLength(int a){
        length = a;
    }

     int getLength()
    {
        return length;
    }

    int getWidth()
    {
        return width;
    }
};

int main(){

      Rectangle r;

     r.initial(10,5);
     cout  << "Length is : " << r.getLength() << endl
           << "Width is : " << r.getWidth() << endl;

     int recarea = r.area();
     cout << "Area is : " << recarea << endl;

      r.changeLength(20);
      cout  << "Length is : " << r.getLength()<< endl
           << "Width is : " << r.getWidth() << endl;
     
    return 0;
}