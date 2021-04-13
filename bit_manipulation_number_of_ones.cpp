#include<bits/stdc++.h>
using namespace std;
int numberofone(int x){
	int count = 0;
	while(x){
		x = x&(x-1);
		count++;
	}
	return count;
}
int main(){
	int x = 19;
	int ans = numberofone(x);
	cout<<"Number of ones are "<<ans;
	return 0;
}