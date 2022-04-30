#include<bits/stdc++.h>
using namespace std;
#define V 5
//Tree in Kashish Question
//  https://www.youtube.com/watch?v=qSfqTyZZmGY&list=PLNxqWc8Uj2LTb6VYJG3Kebwift2oaBFvE&index=16
void addEdge(vector<vector<int>> adj[], int u, int v, int w){
    vector<int> temp1, temp2;
    temp1.push_back(v);
    temp1.push_back(w);
    adj[u].push_back(temp1);
    temp2.push_back(u);
    temp2.push_back(w);
    adj[v].push_back(temp2);
}
int prims(vector<vector<int>> adj[]){
    vector<bool> visit(V, false);
    vector<int> dist(V, INT_MAX);
    vector<int> parent(V, -1);
    set<pair<int, int>> s; // set of distance and destination node
    visit[0] = true;
    dist[0] = 0;
    parent[0] = -1;
    for(int i =  0;i<V;i++){
        if(i==0)
            s.insert({0,0});
        else
            s.insert({INT_MAX, i});
    }
    while(!s.empty()){
        int u = s.begin()->second; //minimum distance node.
        if(visit[u])
            s.erase(s.begin());
        visit[u] = true;
        for(auto v:adj[u]){
            if(!visit[v[0]] && v[1] < dist[v[0]]){
                s.erase({dist[v[0]], v[0]});
                dist[v[0]] = v[1];
                parent[v[0]] = u;
                s.insert({v[1], v[0]});
            }
        }
    }
    int ans = 0;
    for(int i = 0;i<V;i++){
        ans += dist[i];
    }
    return ans;
}
int main(){
    vector<vector<int>> adj[V];
    addEdge(adj, 0, 1, 4);
    addEdge(adj, 0, 2, 1);
    addEdge(adj, 1, 2, 2);
    addEdge(adj, 1, 4, 4);
    addEdge(adj, 2, 3, 2);
    addEdge(adj, 3, 4, 4);
    cout<<prims(adj);
    return 0;
}