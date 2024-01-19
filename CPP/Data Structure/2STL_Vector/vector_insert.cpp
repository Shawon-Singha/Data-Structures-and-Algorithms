#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4};
    //  v.insert(v.begin()+2,10); //add one element

     vector<int>v1 = {10,20,30,40};
     v.insert(v.begin()+3,v1.begin(),v1.end());
    for(int c : v){
        cout << c <<" ";
    }
    return 0;
}