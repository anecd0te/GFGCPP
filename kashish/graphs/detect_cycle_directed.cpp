#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
bool cycle(vector<int> adj[], int start, bool anc[], bool vis[]){
    vis[start] = true;
    anc[start] = true;
    for(auto x : adj[start]){
        if(!vis[x]){
            if(cycle(adj, x, anc, vis))
                return true;
        }
        else if(anc[x])
            return true;
    }
    anc[start] = false;
    return false;
}
int main(){
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 5, 4);
    // addEdge(adj, 2, 0);
    bool vis[V];
    memset(vis, false, sizeof(vis));
    bool anc[V];
    memset(anc, false, sizeof(anc));
    cout<<cycle(adj, 0, anc, vis);
    return 0;
}