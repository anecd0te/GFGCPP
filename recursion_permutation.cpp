#include<bits/stdc++.h>
using namespace std;
void substring(string ip, string op, set<string> &s){
	if(ip.length()==0){
		s.insert(op);
		return;
	}
	string op1 = op;
	string op2 = op;
	op1.push_back(ip[0]);
	op2.push_back(' ');
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	substring(ip,op1,s);
	substring(ip,op2,s);
}
int main(){
	string s = "ABC";
	string s1 = "";
	s1.push_back(s[0]);
	s.erase(s.begin()+0);
	set<string> s2;
	substring(s,s1,s2);
	//cout<<"Size of the stack is "<<s2.size()<<endl;
	for(auto i = s2.begin();i!=s2.end();i++){
		cout<<*i<<endl;
	}
	return 0;
}