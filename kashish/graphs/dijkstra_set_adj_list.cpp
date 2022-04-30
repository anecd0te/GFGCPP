#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>> adj[], int u, int v, int w){
    vector<int> t1, t2;
    t1.push_back(v);
    t1.push_back(w);
    adj[u].push_back(t1);
    t2.push_back(u);
    t2.push_back(w);
    adj[v].push_back(t2);
}
vector<int> dijkstra(vector<vector<int>> adj[], int V, int src){
    set<pair<int, int>> shortestNode;
    vector<int> shortestDistance(V, INT_MAX);
    shortestNode.insert({0, src});
    shortestDistance[src] = 0;
    while(!shortestNode.empty()){
        auto itr = shortestNode.begin();
        int node = itr->second;
        int distance = itr->first;
        shortestNode.erase(itr);
        for(auto u : adj[node]){
            int adjNode = u[0];
            int dist = u[1];
            if(shortestDistance[node] + dist < shortestDistance[adjNode]){
                shortestDistance[adjNode] = shortestDistance[node] + dist;
                shortestNode.insert({shortestDistance[adjNode], adjNode});
            }
        }
    }
    return shortestDistance;

}
int main(){
    int V = 9;
    vector<vector<int>> graph[V];
    addEdge(graph, 0, 1, 4);
    addEdge(graph, 0, 7, 8);
    addEdge(graph, 1, 2, 8);
    addEdge(graph, 1, 7, 11);
    addEdge(graph, 2, 3, 7);
    addEdge(graph, 2, 8, 2);
    addEdge(graph, 2, 5, 4);
    addEdge(graph, 3, 4, 9);
    addEdge(graph, 3, 5, 14);
    addEdge(graph, 4, 5, 10);
    addEdge(graph, 5, 6, 2);
    addEdge(graph, 6, 7, 1);
    addEdge(graph, 6, 8, 6);
    addEdge(graph, 7, 8, 7);
    vector<int> ans = dijkstra(graph, V, 0);
    for(auto x : ans){
        cout<<x<<" ";
    }
    
}