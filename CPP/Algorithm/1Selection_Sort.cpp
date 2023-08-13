#include<iostream>
using namespace std;

int seletion_Sort(int a[],int n){
    int i ,j,index_min,temp;

    for(i = 0;i<n-1;i++){
        index_min = i;
        for(j = i+1;j<n;j++){
            if(a[j] < a[index_min]){
                index_min = j;
            }
        }

        if(index_min != i){
             temp = a[i];
             a[i] = a[index_min];
             a[index_min] = temp;
        }
    }
}

int main(){
    int a[5] = {5,2,6,4,9};
    cout << seletion_Sort(a,5);
}