#include<bits/stdc++.h>
using namespace std;
int sub(int arr[], int n, int k){
	int count = 0;
	int ac = 0;
	int temp = k;
	for(int i = 0;i<n;i++){
		if(arr[i]==temp){
			while(temp){
				count++;
				if(arr[i]!=temp)
					break;
				//cout<<temp;
				temp--;
				i++;
			}
		}
		//cout<<temp<<endl;
		if(temp==0)
			ac+=1;
		temp = k;
	}
	//cout<<"Actual count is "<<ac<<endl;
	return ac;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		int size = sizeof(arr)/sizeof(arr[0]);
		int ans = sub(arr,size,k);
		cout<<ans<<"\n";
	}
}