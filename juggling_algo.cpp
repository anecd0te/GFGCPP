#include<bits/stdc++.h>
#define MAX 9 //size of array
using namespace std;
void reverse(int arr[], int start, int end){
	if(start>=end)
		return;
	swap(arr[start], arr[end]);
	reverse(arr,start+1,end-1);
}
void rotateArray(int arr[], int k, int n){
	//int n = sizeof(arr)/sizeof(arr[0]);
	k = k % n;
	int temp,j=0,d=0;
	for(int i = 0; i < __gcd(n,k); i++){
		j = i;
		temp = arr[i];
		while(1){
		d = (j+k) % n;
		if(d==i)
			break;
		arr[j]=arr[d];
		j=d;
		}
		arr[j] = temp;
	}


}
void print(int arr[]){
	for(int i =0; i < MAX; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int arr[MAX], k;
	for(int i = 0; i < MAX; i++){
		cin>>arr[i];
	}
	cin>>k;
	cout<<"Original array"<<"\n";
	print(arr);
	rotateArray(arr,k, MAX);
	cout<<"After rotation by "<<k<<"\n";
	print(arr);
	reverse(arr,0,MAX-1);
	cout<<"After reversal"<<"\n";
	print(arr);
	return 0;
}