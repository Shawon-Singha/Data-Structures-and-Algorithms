#include<bits/stdc++.h>
using namespace std;

int main(){

    //replace
    // vector<int> v = {1,2,3,4,5,6,1,2,1,2,5,4,6,2};
    // replace(v.begin(),v.end()-1,2,10 );

    //find
    vector<int> v = {1,2,3,4,5,6,1,2,1,2,5,4,6,2};

//    vector<int> :: iterator it;
    auto it = find(v.begin(),v.end(),3);

    cout << *it << endl;


    for(int x : v){
        cout << x << " ";
    }
    return 0;
}