#include<bits/stdc++.h>
using namespace std;
#define V 5
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
void dfs(vector<int> adj[], int start, bool vis[], stack<int> &s, bool flag){
    vis[start] = true;
    for(auto x : adj[start]){
        if(!vis[x]){
            dfs(adj, x, vis, s, flag);
        }
    }
        if(flag){
            s.push(start);
        }

}
int kosaraju(vector<int> adj[]){
    bool vis[V];
    memset(vis, false, sizeof(vis));
    stack<int> st;
    for(int i = 0;i<V;i++){
        if(!vis[i]){
            dfs(adj, i, vis, st, 1);
        }
    }
    vector<int> rev[V];
    for(int u = 0;u<V;u++){
        for(auto v:adj[u]){
            rev[v].push_back(u);
        }
    }
    memset(vis, false, sizeof(vis));
    int count = 0;
    while(!st.empty()){
        int x = st.top();
        st.pop();
        if(!vis[x]){
            dfs(rev, x, vis, st, 0);
            count++;
        }
    }
    return count;

}
int main(){
    // int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 1);
    addEdge(adj, 1, 0);
    addEdge(adj, 0, 3);
    addEdge(adj, 3, 4);
    cout<<kosaraju(adj);
    return 0;
}