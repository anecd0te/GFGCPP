#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool iscyclep(vector<int> adj[], int V, vector<bool> &vis, int node){
    vector<int> parent(V,-1);
    queue<int> q;
    vis[node] = true;
    q.push(node);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v: adj[u]){
            if(!vis[v]){
                vis[v] = true;
                q.push(v);
                parent[v] = u;
            }
            else if(parent[u]!=v)
                return true;
        }
    }
    return false;
}
bool isCycle(vector<int> adj[], int V){
    vector<bool> visited(V, false);
    for(int i =0;i<V;i++)
        if(!visited[i] && iscyclep(adj, V, visited, i))
            return true;
    return false;
}
int main(){
    int V = 4;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    // addEdge(adj, 2, 4);
    addEdge(adj, 2, 3);
    if(isCycle(adj, V))
        cout<<"Yes";
    else cout<<"No";
    return 0;
}