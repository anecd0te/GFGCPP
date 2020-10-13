#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int l,b,count=0; cin >> l >> b;
	while(l<=b){
		l*=3;
		b*=2;
		count++;
	}
	cout<<count;
	return 0;
}