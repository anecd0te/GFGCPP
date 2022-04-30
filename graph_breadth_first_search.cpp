#include<bits/stdc++.h>
using namespace std;
void bfs(int start, vector<int> g[], bool vis[], int V){
    queue<int> q;
    q.push(start);
    vis[start] = true;
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";
        for(int i = 0;i<g[curr].size();i++){
            if(vis[g[curr][i]]==false){
                q.push(g[curr][i]);
                vis[g[curr][i]]=true;
            }
        }
    }
}
int main(){
    int V,E;
    cin>>V>>E;
    bool vis[V];
    memset(vis,false,sizeof(vis));
    vector<int> g[V];
    for(int i = 0;i<E;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    bfs(0, g, vis, V);
    cout<<endl;
}