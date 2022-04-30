#include<bits/stdc++.h>
using namespace std;
#define V 9
int mini(vector<int> &dist, vector<bool> &proc){
    int minim  = INT_MAX;
    int vertex = 0;
    for(int i = 0;i<V;i++){
        if(proc[i]==false && dist[i]<minim){
            vertex = i;
            minim = dist[i];
        }
    }
    return vertex;
}
vector<int> dijkstra(int graph[][V], int src){
    vector<bool> proc(V, false);
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    for(int i = 0;i<V-1;i++){
        int u = mini(dist, proc);
        proc[u] = true;
        for(int v = 0;v<V;v++){
                if(graph[u][v] && proc[v]==false && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
                    dist[v] = dist[u] + graph[u][v];
        }
    }
    return dist;
}
int main(){
    // int V = 9;
    int graph[V][V] =  { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
    int src = 0;
    vector<int> ans = dijkstra(graph, src);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}