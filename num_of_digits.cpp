#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cout<<"Enter a number";
	cin>>n;
	cout<<"Number of digits in this number are "<<floor((log10(n)+1));
	return 0;
}