#include<bits/stdc++.h>
using namespace std;

int main(){
    int node,edge;
    cin >> node >> edge;

    int mat[node][node];
    memset(mat,0,sizeof(mat));


    while(edge--){
     int a,b;
     cin >> a >> b;

     mat[a][b] = 1;
     mat[b][a] = 1;
    }

    for(int i = 0;i<node;i++){
        for(int j = 0;j < node;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}