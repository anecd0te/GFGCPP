/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int improv_bs(int arr[], int left, int right, int x){
	int mid = 0;
	int size = right+1;
	for(int right = size/2;right>=1;right/=2){
		while(right + mid < size && arr[right+mid]<=x)
			mid+=right;
	}
	if(arr[mid]==x)
		return mid;
	else return -1;
}
int binary_search(int arr[],int left, int right, int x){
	while(left<=right){
		int mid = left+(right-left)
		/2;
		if(arr[mid]==x)
			return mid;
		if(arr[mid]>x){
			right = mid-1;
		}
		else left = mid+1;
	}
	return -1;
}
int main(){
	//Kadane's
	int arr[10] = {1,3,5,7,8,9,11,15,18,22};
	int size = sizeof(arr)/sizeof(arr[0]);
	int x = 22;
	//int ans = binary_search(arr,0,size-1,x);
	int ans = improv_bs(arr,0,size-1,x);
	if(ans==-1)
		cout<<"Element not found";
	else cout<<"Element found at "<<ans;
	return 0;
}