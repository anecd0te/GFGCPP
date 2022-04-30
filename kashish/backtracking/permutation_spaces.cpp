#include<bits/stdc++.h>
using namespace std;
void permutation(string &currstr, set<string> &str, int start, int len){
	if(start==len-1){
		str.insert(currstr);
		return;
	}
	permutation(currstr, str, start+1,len);
	currstr.insert(start+1, " ");
	permutation(currstr, str, start+2, len+1);
	currstr.erase(start+1,1);
}
void print(set<string> s){
	for(auto x: s){
		cout<<x<<"\n";
	}
}
int main(){
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		set<string> s;
		int len = str.length();
		permutation(str, s, 0,len);
		print(s);
	}
}