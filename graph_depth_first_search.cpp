//https://www.youtube.com/watch?v=YYq38LTz774&list=PLEJXowNB4kPzByLnnFYNSCoqtFz0VKLk5&index=3
#include<bits/stdc++.h>
using namespace std;
void dfs(int s, vector<int> g[], bool vis[]){
	vis[s] = true;
	cout<<s<<" ";
	for(size_t i = 0;i<g[s].size();i++){
		if(vis[g[s][i]]==false){
			dfs(g[s][i], g, vis);
		}
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,E;
		cout<<"Enter vertices and edges\n";
		cin>>N>>E;
		vector<int> g[N];
		bool vis[N];
		memset(vis, false, sizeof(vis));
		for(int i = 0;i<E;i++){
			int u, v;
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		dfs(0,g,vis);
		cout<<endl;
	}
}