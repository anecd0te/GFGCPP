#include<bits/stdc++.h>
using namespace std;
bool isCyclic_util(vector<int> adj[], vector<bool> visited, int curr){
	if(visited[curr]==true)
		return true;
	visited[curr] = true;
	bool flag = false;
	for(int i = 0;i<adj[curr].size();i++){
		flag = isCyclic_util(adj, visited, adj[curr][i]);
		if(flag==true)
			return true;
	}
	return false;
}
bool isCyclic(int V,vector<int> adj[]){
	vector<bool> visited(V, false);
	bool flag = false;
	for(int i = 0; i<V;i++){
		visited[i]= true;
		for(int j = 0;j<adj[i].size();j++){
			flag = isCyclic_util(adj, visited, adj[i][j]);
			if(flag==true)
				return true;
		}
		visited[i] = false;
	}
	return false;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int V,E;
		cin>>V>>E;
		vector<int> adj[V];
		for(int i = 0;i<E;i++){
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
		}
		cout<<isCyclic(V, adj)<<endl;
	}
	return 0;
}