#include<iostream>
using namespace std;

int main(){
    int a= 10;
    int &r = a; // declare of reference variable ,using '&'....
    // a,itself called r...

    cout << a << endl;
    r++;

    cout << r <<endl
         << a << endl;
    return 0;
}