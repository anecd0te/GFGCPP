#include<bits/stdc++.h>
using namespace std;
bool checkithbit(int x, int i){
	//number and 2^i should give 1 at ith bit if it's set otherwise all 0;
	if(x&(1<<i))
		return true;
	return false;
}
int main(){
	int x = 18;
	checkithbit(x,4)?cout<<"yes":cout<<"No";
	return 0;
}