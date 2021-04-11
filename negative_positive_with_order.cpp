//https://www.faceprep.in/c/rearrange-positive-and-negative-numbers-in-an-array-faceprep/

#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n){
	int temp, j;
	for(int i = 1; i < n; i++){
		temp = arr[i];
		if(temp>0)
			continue;
		j = i-1;
		while(arr[j]>0 && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}
// A utility function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 
// Driver code
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}