#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10,20,30};
    // vector<int> v1 = {1,2,3};

    // v = v1; //O(1)
    
    v.pop_back();
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " " ;
    }

    // cout << endl;

    // vector<int> v2 = {10,20,30,40};
    // vector<int> v3 = {1,2,3};

    // v3 = v2 ; //O(N)

    // for(int i = 0;i<v2.size();i++){
    //     cout << v3[i] << " " ;
    // }


    return 0;
}