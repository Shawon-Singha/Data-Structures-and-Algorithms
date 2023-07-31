// monolithic program means everything will write inside the main function
#include<iostream>
using namespace std;

int main(){
   int length = 0, width = 0;

   cout << "Enter the length and width " ;

   cin >> length >> width;

   int area = length * width ;
   int pari = 2 * (length + width);

   cout << "Area is : " << area << endl
        << "Parameter is : " << pari << endl;

  return 0;
}