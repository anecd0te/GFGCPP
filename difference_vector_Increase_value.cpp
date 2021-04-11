#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;//size of array
	cin>>n;
	vector<int> arr(n,0);
	int q; //number of queries
	cin>>q;
	while(q--){
		int l, r;
		cin>>l>>r;
		arr[l]++;
		if(r+1<n){
			arr[r+1]--;
		}
	}
	for(int i = 1; i<n;i++){
			arr[i]+=arr[i-1];
		}
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
		}
		cout<<"\n";
	return 0;
}