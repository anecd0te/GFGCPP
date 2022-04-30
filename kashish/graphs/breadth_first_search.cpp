#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<int> bfs(vector<int> adj[], int V){
    vector<int> ans;
    queue<int> q;
    bool vis[V];
    memset(vis, false, sizeof(vis));
    q.push(0);
    vis[0] = true;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        ans.push_back(temp);
        for(int i = 0;i<adj[temp].size();i++){
            if(!vis[adj[temp][i]]){
                q.push(adj[temp][i]);
                vis[adj[temp][i]] = true;
            }
        }
    }
    return ans;

}
void print(vector<int> adj[], int V){
    for(int v = 0;v<V;v++){
        cout<<"nodes from "<<v<<"\n head";
        for(auto x:adj[v]){
            cout<<" -> "<<x;
        }
        cout<<endl;
    }
}
int main(){
    int V = 5;//number of vertices
    vector<int> adj[V];
    //GFG Graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    vector<int> ans = bfs(adj, V);
    for(auto x:ans){
        cout<<x<<" ";
    }
    // print(adj, V);

    return 0;
}

/*
//self tested
#include<bits/stdc++.h>
using namespace std;
// Directed Graph
void bfs(vector<int> adj[], int start, bool visit[], vector<int> &ans){
    queue<int> q;
    visit[start] = true;
    q.push(start);
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        ans.push_back(temp);
        for(auto x:adj[temp]){
            if(!visit[x]){
                visit[x] = true;
                q.push(x);
            }
        }
    }
}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
int main(){
    int V = 6;
    vector<int> adj[V];
    bool visit[V];
    vector<int> ans;
    memset(visit, false, sizeof(visit));
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 4, 3);
    addEdge(adj, 4, 2);
    addEdge(adj, 3, 5);
    addEdge(adj, 5, 0);
    bfs(adj, 0, visit, ans);
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}
*/