#include<bits/stdc++.h>
using namespace std;
#define MAX_ARR 256
bool arePair(char open, char close){
	if(open=='{' && close == '}')
		return true;
	if(open == '[' && close == ']')
		return true;
	if(open=='(' && close ==')')
		return true;
	return false;
}
bool ifBalanced(string e){
	stack<char> s;
	for(int i = 0; i <e.length();i++){
		if(e[i]=='{' || e[i]=='[' || e[i]=='(')
			s.push(e[i]);
		else if(e[i]=='}' || e[i]==']' || e[i]==')')
		{
			if(s.empty() || !arePair(s.top(),e[i]))
				return false;
			else s.pop();
		}

	}
	return s.empty()?true:false;
}
int main(){
	string exp = "{[[()]}";
	if(ifBalanced(exp))
		cout<<"Balanced"<<"\n";
	else cout<<"paranthesis aren't Balanced"<<"\n";
	return 0;
}