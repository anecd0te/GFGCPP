//https://www.youtube.com/watch?v=t2d-XYuPfg0
//https://gist.github.com/SuryaPratapK/531ec1fd8efdaeb0c098b89a7a1a9d3e
#include<bits/stdc++.h>
using namespace std;
#define V 6 //Number of vertices
int selectmin(vector<int> &distance, vector<bool> &processed){
    int minimum = INT_MAX;
    int vertex;
    for(int i = 0;i<distance.size();i++){
        if(!processed[i] && distance[i]<minimum){
            vertex = i;
            minimum = distance[i];
        }
    }
    return vertex;
}
void dijkstra(int graph[V][V]){
    int parent[V];
    vector<bool> processed(V, false);
    vector<int> distance(V, INT_MAX);
    parent[0] = -1;
    distance[0] = 0;
    for(int i = 0;i<V-1;i++){
        //select best node by applying greedy method. finding minimum unvisited.
        int U = selectmin(distance, processed);
        processed[U] = true;

        //relax adjacent nodes;
        for(int j = 0;j<V;j++){
            		/* 3 conditions to relax:-
			      1.Edge is present from U to j.
			      2.Vertex j is not included in shortest path graph
			      3.Edge weight is smaller than current edge weight
			*/
            if(graph[U][j]!=0 && processed[j]==false && distance[U]!=INT_MAX
             && distance[U]+graph[U][j]<distance[j]){
                 distance[j] = distance[U] + graph[U][j];
                 parent[j] = U;
             }
        }
    }
    for(auto x:parent){
        cout<<x<<" ";
    }
}
int main(){
    int graph[V][V]= { {0, 1, 4, 0, 0, 0},
						{1, 0, 4, 2, 7, 0},
						{4, 4, 0, 3, 5, 0},
						{0, 2, 3, 0, 4, 6},
						{0, 7, 5, 4, 0, 7},
						{0, 0, 0, 6, 7, 0} };
                        dijkstra(graph);
                        return 0;
}