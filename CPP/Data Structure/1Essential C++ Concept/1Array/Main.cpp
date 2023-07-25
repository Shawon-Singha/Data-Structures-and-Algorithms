#include<iostream>
using namespace std;

int main(){
    int a[5] = {10,20,30,40,50};

    // int a[] = {10,20,30,40,50};
    // both are correct.

    cout << "Size of this array: "<<sizeof(a) << endl;

    cout << " Array is :" ;

    for(int i =0;i<5;i++){
        cout << " " << a[i];
    }

    return 0;
}