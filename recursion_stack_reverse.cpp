#include<bits/stdc++.h>
using namespace std;
void Print(stack<int> &s){
	if(s.empty())
		return;
	int x = s.top();
	cout<<x<<endl;
	s.pop();
	Print(s);
	s.push(x);
}
void Insert(stack<int> &s, int el){
	if(s.empty()){
		s.push(el);
		return;
	}
	int temp = s.top();
	s.pop();
	Insert(s, el);
	s.push(temp);
}
void Reverse(stack<int> &s){
	if(s.size()==1)
		return;
	int temp = s.top();
	s.pop();
	Reverse(s);
	Insert(s,temp);
}
int main(){
	stack<int> s;
	int input;
	while(cin>>input){
		s.push(input);
	}
	cout<<"Original stack \n";
	Print(s);
	Reverse(s);
	cout<<"Reversed Stack \n";
	Print(s);
}