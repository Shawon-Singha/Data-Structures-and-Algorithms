#include<bits/stdc++.h>
using namespace std;

int main(){
    int node,edge;
    cin >> node >> edge;
    vector<int> mat[node];
    while (edge--)
    {
        int a,b;
        cin >> a >> b;

        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    
    vector<int> v;
    for(int x : mat[0]){
        cout << x << " ";
    }
    return 0;
}