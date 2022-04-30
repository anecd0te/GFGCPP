#include<bits/stdc++.h>
using namespace std;
#define V 4
#define INF -1
void floydWarshall(vector<vector<int>> graph){
    for(int k = 0;k<V;k++){
        for(int i = 0;i<V;i++){
            for(int j = 0;j<V;j++){
                if(graph[i][j]==INF){
                    graph[i][j]  = graph[i][k] + graph[k][j];
                }
                else if(graph[i][k] + graph [k][j] < graph[i][j]){
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
    for(int i = 0;i<V;i++){
        for(int j = 0;j<V;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> graph = { { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
    // vector<vector<int>> graph(V, vector<int> (V, -1));
    //for taking input
    // for(int i = 0;i<V;i++){
    //     for(int j = 0;j<V;j++){
    //         cin>>graph[i][j];
    //     }
    // }
    floydWarshall(graph);
    return 0;
}