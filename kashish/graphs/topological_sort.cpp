#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
void solve(vector<int> adj[], int start, bool visit[], stack<int> &st){
    visit[start] = true;
    for(auto x : adj[start]){
        if(!visit[x])
            solve(adj, x, visit, st);   
    }
    st.push(start);
}
void topo(vector<int> adj[], int V){
    stack<int> st;
    bool visit[V];
    memset(visit, false, sizeof(visit));
    for(int i = 0;i<V;i++){
        if(!visit[i])
            solve(adj, i, visit, st);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    int V = 4;
    vector<int> adj[V];
    addEdge(adj, 1, 0);
    addEdge(adj, 2, 0);
    addEdge(adj, 3, 0);
    topo(adj, V);
    return 0;
}