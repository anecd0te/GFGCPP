#include<bits/stdc++.h>
using namespace std;
int record_breaking(int arr[], int n){
	int rbd = 0, max_f=arr[0];
	for(int i = 0;i<n;i++){
		if(i!=n-1){
			if((arr[i]>max_f) && (arr[i]>arr[i+1]))
						rbd++;
				}
		else if(arr[i]>max_f)
			rbd++;
		max_f = max(arr[i], max_f);
	}
	return rbd;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int ans = record_breaking(arr, n);
	cout<<"Number of record breaking days were "<<ans;
	return 0;
}