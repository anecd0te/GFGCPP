#include<bits/stdc++.h>
using namespace std;

int main(){
	/*
	int n,count;
	count = 0;
	string poly;
	cin >> n;
	while(n--){
		cin>>poly;
		if(poly == "Icosahedron")
			count += 20;
		else if(poly == "Tetrahedron")
			count += 4;
		else if(poly == "Cube")
			count += 6;
		else if(poly == "Dodecahedron")
			count += 12;
		else if(poly == "Octahedron")
			count += 8;
	}
	cout<<count;
	*/
	//Answer on portal
	ios_base::sync_with_stdio(false);
	map<string,int> val;
	val["Tetrahedron"] = 4;
	val["Cube"] = 6;
	val["Octahedron"] = 8;
	val["Dodecahedron"] = 12;
	val["Icosahedron"] = 20;
	int n; cin >> n;
	int res = 0;
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		res+=val[s];
	}
	cout<<res<<endl;
	return 0;
}