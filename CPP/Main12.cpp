#include<iostream>
using namespace std;

int top = -1;

void push(int arr[], int x, int n){
    if(top < n-1){
      top++;
      arr[top] = x;
    }
}


int pop(int arr[]){
    if(top >= 0){
        top--;
        return arr[top];

    }
}

int main(){
    int n = 5;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        push(arr,arr[i],n);
    }
   
    pop(arr);
    pop(arr);
    
    // Print the values in the array
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl; // Add a newline for better formatting
    return 0;
}
