#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> mp;
    mp.insert({"Shawon SIngha",75});
    mp.insert({"Tamim,19"});
    mp.insert({"Shamim",79});

    for(auto it = mp.begin();it!=mp.end();it++){
        cout << it.first << " "
            << it.second << " ";
    }
    return 0;
}