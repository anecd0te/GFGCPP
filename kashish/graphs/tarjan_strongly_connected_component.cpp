#include<bits/stdc++.h>
using namespace std;
#define V 5
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
void dfs(vector<int> adj[], int u, int &time, vector<int> &low, vector<int> &disc,
 stack<int> &st, vector<bool> &instack, vector<vector<int>> &ans){
    disc[u] = time;
    low[u] = time;
    time++;
    st.push(u);
    instack[u] = true;
    for(auto v: adj[u]){
        if(disc[v]==-1){
            dfs(adj, v, time, low, disc, st, instack, ans);
            low[u] = min(low[v], low[u]);
        }
        else if(instack[v]){
            low[u] = min(disc[v], low[u]);
        }
    }
    if(disc[u]==low[u]){
        vector<int> temp;
        while(st.top()!=u && !st.empty()){
            temp.push_back(st.top());
            instack[st.top()]=false;
            st.pop();
        }
        temp.push_back(st.top());
        instack[st.top()] = false;
        st.pop();
        sort(temp.begin(), temp.end());
        ans.push_back(temp);
    }
 }
vector<vector<int>> tarjan(vector<int> adj[]){
    vector<int> low (V, -1);
    vector<int> disc(V, -1);
    stack<int> st;
    int time = 0;
    vector<bool> instack(V, false);
    vector<vector<int>> ans;
    for(int i = 0;i<V;i++){
        if(disc[i]==-1){
            dfs(adj, i, time, low, disc, st, instack, ans);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main(){
    vector<int> adj[V];
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 1);
    addEdge(adj, 1, 0);
    addEdge(adj, 0, 3);
    addEdge(adj, 3, 4);
    vector<vector<int>> ans = tarjan(adj);
    for(auto x:ans){
        for(auto y:x){
            cout<<y<<" ";
        }
    }
    return 0;
}