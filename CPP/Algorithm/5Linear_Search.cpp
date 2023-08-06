#include<iostream>
using namespace std;

int linera_Search(int a[],int n,int x){
    for(int i = 0;i<n;i++){
        if(a[i] == x){
            return i;
        }
    }

    return -1;
}

int main(){
    int a[5] = {10,20,30,40,50};
    int b = 30;

    cout << linera_Search(a,5,b);

    return 0;

}