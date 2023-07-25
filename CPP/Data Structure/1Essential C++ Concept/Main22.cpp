#include<iostream>
using namespace std;

int main(){
   int *p;

   p = new int[5];

   p[0] = 10;
   p[1] = 20;
   p[2] = 30;
   p[3] = 40;
   p[4] = 50;

   cout << "Size of this array : " <<sizeof(int)*5 <<" bytes"<<endl;

   for(int i =0;i<5;i++){
    cout << p[i] << endl;
   }

   delete [] p; // Free the dynamically allocated memory before exiting the program
    return 0;
}