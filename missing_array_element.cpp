#include<bits/stdc++.h>
using namespace std;
int getMissingNo(int arr[], int n){
	int size = n+1;
	int x1 = arr[0];
	for(int i = 1;i<n;i++){
		x1 = x1^arr[i];
	}
	int x2 = 1;
	for(int i = 2;i<=size;i++){
		x2 = x2^i;
	}
	return x1^x2;
}
int main()
{
    int arr[] = { 1, 2, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss;
}