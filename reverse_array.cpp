// Recursive C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
{
	if(start>=end)
		return;
	swap(arr[start], arr[end]);
	reverseArray(arr,start+1,end-1);

}
/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
} 

/* Driver function to test above functions */
int main() 
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	
	// To print original array
	printArray(arr, 6);
	
	// Function calling
	reverseArray(arr, 0, 5);
	
	cout << "Reversed array is" << endl;
	
	// To print the Reversed array
	printArray(arr, 6);
	
	return 0;
}
