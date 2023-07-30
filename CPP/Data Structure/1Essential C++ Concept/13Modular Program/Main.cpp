// Modular program means do all thing inside the function

#include<iostream>
using namespace std;


int area(int length ,int width){
    return length * width;
}

int parameter(int length ,int width){
    return 2 * length * width;
}

int main(){
   int length,width;

   cout << "Enter the length and width : " ;
   cin >> length >> width;

   int a = area(length,width);
   int peri = parameter(length,width);

   cout << " Area is : " << a << endl
        << " parameter is : " << peri << endl;

    return 0;
}