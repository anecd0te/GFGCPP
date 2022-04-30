#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfs(vector<int> adj[], int start, bool visit[], vector<int> &ans){
    visit[start] = true;
    ans.push_back(start);
    for(auto x: adj[start]){
        if(!visit[x])
            dfs(adj, x, visit, ans);
    }
}
void DFS(vector<int> adj[], int V){
    int start = 0;
    bool visit[V];
    memset(visit, false, sizeof(visit));
    vector<int> ans;
    dfs(adj, start, visit, ans);
    for(auto x:ans)
        cout<<x<<" ";
}
int main(){
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    DFS(adj, V);
    return 0;
}