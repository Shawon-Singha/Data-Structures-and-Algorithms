#include<iostream>
using namespace std;

int *fun(int size){
    int *p;
    p = new int[size]; // allocate the memory

    for (int i = 0; i < size; i++)
    {
        p[i] = i+1; // Store the value in that allocated memory...
    }
     return p;
}

int main(){
  int *ptr,size = 5;

  ptr = fun(size);

  for (int  i = 0; i < size; i++)
  {
    cout << ptr[i] << endl;
  }
  return 0; 
}