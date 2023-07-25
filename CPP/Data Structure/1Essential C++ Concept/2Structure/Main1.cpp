#include<iostream>
using namespace std;

struct  Rectangle{
    int length;
    int breath;
};

// both are same.

// struct  Rectangle{
//     int length;
//     int breath;
// }/* r */ // this is also same;

// struct Rectangle r; //  declaration here,there will be no problem.

int main(){

    struct Rectangle r = {10,5}; //declaration
     
     //both initial are correct
    // r.length = 10;
    // r.breath = 5;

    cout << " " << sizeof(r)<< endl;
    cout << r.length << endl
         << r.breath << endl;

    return 0;
}