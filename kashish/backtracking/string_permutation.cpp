#include<bits/stdc++.h>
using namespace std;
void permutation(int pos, int len, string &str, set<string> &s){
	if(pos==len-1){
		s.insert(str);
		return;
	}
	for(int i = 0; i<len;i++){
		swap(str[pos], str[i]);
		permutation(pos+1, len, str, s);
		swap(str[pos], str[i]);
	}
}
void print(set<string> s){
	for(auto x :s){
		cout<<x<<" ";
	}
}
int main(){
	int i,t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		int len = str.length();
		set<string> s;
		permutation(0, len, str, s);
		print(s);
	}
}