#include<iostream>
using namespace std;

void swap(int *a, int *b, int *c) {
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() {
    int x, y, z;

    cout << "Input the value of 1st element : ";
    cin >> x;
    cout<<"Input the value of 2nd element : ";
    cin >> y;

    cout << ("Input the value of 3rd element : ");
    cin >> z;


    cout << endl <<  "Before swapping,the value are :" << endl;
    cout << "element 1 = "<< x << endl
         << "element 2 = " <<y << endl
         << "element 3 = "<< z<<  endl;

   
    swap(&x, &y, &z);
   

    
    cout << endl << "After swapping,the value are :" << endl;
    cout << "element 1 = " << x << endl
           << "element 2 = " << y << endl
           <<"element 3 = "<< z << endl;

    return 0;
}
