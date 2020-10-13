#include<bits/stdc++.h>
using namespace std;
void reverse(char *c, int n){
	stack<char> S;
	for(int i = 0; i < n; i++){
		S.push(c[i]);
	}
	for (int i = 0; i < n; i++)
	{
		c[i] = S.top();
		S.pop();
	}
}
int main(){
	char c[50];
	cout<<"Enter a string"<<"\n";
	cin>>c;
	reverse(c,strlen(c));
	cout<<c;
	return 0;
}