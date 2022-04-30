#include<bits/stdc++.h>
using namespace std;
int bettersubArraySum(int arr[], int n, int sum){
	int curr_sum = arr[0], start=0;
	for(int i = 1; i<=n;i++){
		while(curr_sum>sum && start<i-1){
			curr_sum = curr_sum-arr[start];
			start++;
		}
		if(curr_sum==sum){
		cout<<"Found between "<<start<<" and "<<i-1;
		return 1;
		}
		if(i<n)
			curr_sum +=arr[i];
	}
	cout<<"not found";
	return 0;

}
int subArraySum(int arr[], int n, int sum){
	for(int i = 0; i <n;i++){
		int curr_sum = arr[i];
		for(int j = i+1;j<n;j++){
			if(curr_sum == sum){
				cout<<"Sum found between "<<i<<"and "<<j-1;
				return 1;
			}
			if(curr_sum>sum || j ==n)
				break;
			curr_sum += arr[j];

		}
	}
	cout<<"No such subarray found";
	return 0;
}
int main(){
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    bettersubArraySum(arr, n, sum);
    return 0;
}