#include<bits/stdc++.h>
using namespace std;
void sub_sum(int arr[], int n, int x){
	int i = 0,j=0, st = -1, en = -1, s = 0;
	//cout<<arr[0]<<" value of j \n";
	while(j<n && s+arr[j]<=x){
		s += arr[j];
		//cout<<"s in 1st loop"<<s<<endl;
		j++;
	}
	if(s == x){
		cout<<"found between "<<i+1<<"and "<<j;
		return;
	}
	while(j<n){
		s += arr[j];
		while(s>x){
			s -= arr[i];
			//cout<<"s "<<s<<endl;
			i++;
		}
		if(s == x){
			cout<<"Found between "<<i+1<<" and "<<j+1;
			return;
		}
		j++;
	}
	cout<<"not found";
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	cout<<x<<" ";
	sub_sum(arr, n, x);
	return 0;
}