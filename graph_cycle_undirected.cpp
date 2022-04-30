//https://www.youtube.com/watch?v=L0DcePeWHnM&list=PLEJXowNB4kPzByLnnFYNSCoqtFz0VKLk5&index=7
#include <bits/stdc++.h>
using namespace std;
bool isCyclicUtil(vector<int> adj[], vector<int> visited, int curr){
    if(visited[curr]==2)
        return true;
    visited[curr]=1;
    bool Flag = false;
    for(int i = 0;i<adj[curr].size();i++){
        if(visited[adj[curr][i]]==1)
            visited[adj[curr][i]]=2;
        else{
            Flag = isCyclicUtil(adj, visited, adj[curr][i]);
            if(Flag)
                return true;
        }
    }
    return false;
}
bool isCyclic(vector<int> adj[], int V){
    vector<int> visited(V,0);
    bool Flag = false;
    for(int i = 0;i<V;i++){
        visited[i] = 1;
        for(int j = 0;j<adj[i].size();j++){
            Flag = isCyclicUtil(adj,visited,adj[i][j]);
            if(Flag==true)
                return true;
        }
        visited[i]=0;
    }
    return false;
}
int main() {
	int T;
	cin>>T;
	while(T--){
	    int V,E;
	    cin>>V>>E;
	    vector<int> adj[V];
	    for(int i = 0;i<V;i++){
	        int u,v;
	        cin>>u>>v;
	        adj[u].push_back(v);
	        adj[v].push_back(u);
	    }
	    cout<<isCyclic(adj, V)<<endl;
	}
	return 0;
}