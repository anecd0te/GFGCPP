#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> graph[], int u, int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}
    void printgraph(vector<int> graph[], int n){
        vector<int> :: iterator it;
        for(int i = 0;i<n;i++){
            cout<<"Adjaceny list for the vertex "<<i<<"\t";
            for(it=graph[i].begin();it!=graph[i].end();it++){
                cout<<*it<<"\t";
            }
            cout<<"\n";
        }
    }
int main(){
    int n, e, u, v;
    cout<<"Enter number of vertices \n";
    cin>>n;
    cout<<"Enter number of edges \n";
    cin>>e;
    vector<int> graph[n];
    for(int i = 0;i<e;i++){
        cout<<"Enter starting vertex \n";
        cin>>u;
        cout<<"Enter ending vertex \n";
        cin>>v;
        addEdge(graph, u, v);
    }
    printgraph(graph, n);

}