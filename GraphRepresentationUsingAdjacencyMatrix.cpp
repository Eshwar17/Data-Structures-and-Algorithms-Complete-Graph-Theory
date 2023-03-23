#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    //Adjacency Matrix Declaration
    int adj[n + 1][n + 1];
    //Initialize it with 0's
    memset(adj, 0, sizeof(adj));
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    //This is very much costly to store in adjacency matrix as it takes n * n space 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }cout << endl;
    }
   
 return 0;
}