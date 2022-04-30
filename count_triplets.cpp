#include<bits/stdc++.h>
using namespace std;
int counttriplets(int arr[], int n){
	int max_val = 0;
	for(int i = 0;i<n;i++){
		max_val = max(max_val, arr[i]);
	}
	int freq_max[max_val+1] = {0};
	for(int i = 0;i<n;i++){
		freq_max[arr[i]]++;
	}
	int ans = 0;
	//case 1 : 0,0,0 : 0+0 = 0
	ans += freq_max[0]*(freq_max[0]-1)*(freq_max[0]-2)/6;
	//case2 0,x,x therefore 0+x = x
	for(int i = 1; i<=max_val;i++)
	ans += freq_max[0] * freq_max[i]*(freq_max[i]-1)/2;
	//case3 x,x,2x;
	for(int i = 1;2*i<=max_val;i++){
		ans+= freq_max[i]*(freq_max[i]-1)/2* freq_max[2*i];
	}
	//case 4 x,y, x+y
	for(int i = 1; i <=max_val;i++){
		for(int j = i+1; i+j<=max_val;j++){
			ans+= freq_max[i] * freq_max[j] * freq_max[i+j];
		}
	} 
	return ans;
}
int main(){
    int arr[] = { 1,5,3,2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    int ans = counttriplets(arr, n);
    cout<<ans;
    return 0;
}