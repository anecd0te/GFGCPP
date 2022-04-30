#include<bits/stdc++.h>
using namespace std;
void Print_stack(stack<int> &s){
	if(s.empty())
		return;
	int x = s.top();
	cout<<x<<endl;
	s.pop();
	Print_stack(s);
	s.push(x);
}
void Insert(stack<int> &s, int temp){
	if(s.size()==0 || s.top()<=temp){
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	Insert(s,temp);
	s.push(val);
}
void Sorted(stack<int> &s){
	if(s.size()<=1)
		return;
	int temp = s.top();
	s.pop();
	Sorted(s);
	Insert(s,temp);
}
int main(){
	stack<int> s;
	//cout<<s.top();
	s.push(3);
	s.push(1);
	s.push(5);
	s.push(4);
	s.push(2);
	s.push(5);
	cout<<"Original Stack \n";
	Print_stack(s);
	Sorted(s);
	cout<<"Sorted Stack \n";
	Print_stack(s);
	return 0;
}