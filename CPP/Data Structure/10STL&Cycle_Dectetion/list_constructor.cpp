#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>mylist;

    cout << mylist.size() <<" ";

    list<int>myList(10,5);
    for(auto it = myList.begin();it!=myList.end();it++){
        cout << *it <<" ";
    }
    return 0;
}