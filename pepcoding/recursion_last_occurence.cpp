#include<bits/stdc++.h>
using namespace std;
int last_occ(vector<int> &v, int n, int num){
	if(n==v.size()-1){
		if(v[n]==num)
			return n;
		return -1;
	}
	int id = last_occ(v, n+1, num);
	if(v[n]==num){
		if(id==-1)
			id=n;
	}
	return id;
}


	// int id = first_occ(v, n+1, num);
	// if(v[n]==num)
	// 	id = n;
	// return id;
// }
int main(){
	vector<int> v = {2,3,6,9,8,3,2,6,2,4,3,6};
	cout<<last_occ(v, 0, 6);
	return 0;
}