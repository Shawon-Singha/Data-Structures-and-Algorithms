#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<int> v[N];
bool vis[N];

void dfs(int src){
    cout << src << " ";
    vis[src] = true;

    for(int child : v[src]){
        if(!vis[child]){
            dfs(child);
        }

    }
}

int main(){
    int n,e;
    cin >> n >> e;

    while (e--)
    {
        int src,tar;
        cin >> src >> tar;
        v[src].push_back(tar);
        v[tar].push_back(src);
    }
    memset(vis,false,sizeof(vis));
    dfs(0);
    
    return 0;
}