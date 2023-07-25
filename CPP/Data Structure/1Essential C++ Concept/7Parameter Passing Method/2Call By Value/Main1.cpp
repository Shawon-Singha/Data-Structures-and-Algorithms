//Call by address
// here actual and formal parameter both are change...

#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10, b= 5;

    swap(&a,&b);

    cout << a << endl  
          << b << endl;
    
    return 0;


}