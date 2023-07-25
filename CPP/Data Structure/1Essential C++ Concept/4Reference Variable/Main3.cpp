#include<iostream>
using namespace std;

int main(){
    int a= 10;
    int &r = a; // declare of reference variable ,using '&'....
    // a,itself called r...
    // reference variable doesn't consume memory...

    cout << a << endl;
    r++;

    cout << r <<endl
         << a << endl;
        

     cout << endl;



     int b = 20;
     r = b;
     /*it does not mean that r will be reference to b..
     it means that b's value store in r , and r means a */

     cout << a << endl
          << r << endl;
    return 0;
}