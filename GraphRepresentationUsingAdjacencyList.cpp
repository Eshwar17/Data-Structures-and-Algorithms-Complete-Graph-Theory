#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1]; //1 based indexing
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //Display the grapgh
    for(int i = 0; i <= n; i++) {
        for(auto ele : adj[i]) {
            cout << ele << " ";
        }cout << endl;
    }
 return 0;
}