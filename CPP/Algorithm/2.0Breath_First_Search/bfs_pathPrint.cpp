#include<bits/stdc++.h>
using namespace std;

vector<int> v[1000];  // Adjacency list representation of the graph
bool vis[1000];   // Array to keep track of visited nodes
int level[1000];
int parent[1000];

void bfs(int src){
  queue<int> q;
  q.push(src);
  vis[src] = true;
  level[src] = 0;
  
  cout<< "Sequence is : ";
  while(!q.empty()) {
    int par = q.front();
    q.pop();
    cout << par << " ";
    
    for(int child:v[par]){
        if(vis[child] == false){
            q.push(child);
            vis[child] = true;
            level[child] = level[par] + 1;
            parent[child] = par;
        }
    }
  }
}

int main(){
    int n, e;
    cin >> n >> e;   

    while(e--){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src,des;
    cin >> src >> des;
    memset(vis, false, sizeof(vis)); 
    memset(level, false, sizeof(level)); 
    memset(parent, false, sizeof(parent)); 

    bfs(src);
    
    int x = des;
    while(x!= -1){
        cout << x << " ";
        x = parent[x];
    }
    return 0;
}
