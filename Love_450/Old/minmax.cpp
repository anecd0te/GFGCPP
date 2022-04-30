#include<bits/stdc++.h>
using namespace std;
struct Pair
{
	int min;
	int max;
};
Pair getMinMax(int arr[], int n){
	Pair minmax;
	int i;
	//Even number of elements
	if(n%2==0){
		if(arr[0]>arr[1]){
			minmax.max = arr[0];
			minmax.min = arr[1];
		}
		else{
			minmax.max = arr[1];
			minmax.min = arr[0];
		}
		i=2;
	}
	else{
		minmax.min = arr[0];
		minmax.max = arr[0];
		i=1;
	}
	while(i<n-1){
		if(arr[i]>arr[i+1]){
			if(arr[i]>minmax.max){
				minmax.max = arr[i];
			}
			if(arr[i+1]<minmax.min){
				minmax.min = arr[i+1];
			}

		}
		else{
			if(arr[i+1]>minmax.max){
				minmax.max = arr[i+1];
			}
			if(arr[i]<minmax.min){
				minmax.min = arr[i];
			}
		}
		i+=2;
	}
	return minmax;

}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	int arr[] = {1000, 11, 445, 6, 330, 3000};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	Pair minmax = getMinMax(arr, arr_size);
	cout<<"Minimum element is "<<minmax.min<<"\n";
	cout<<"Maximum element is "<<minmax.max;
	return 0;

}

/*
Total number of comparisons: Different for even and odd n, see below: 

       If n is odd:    3*(n-1)/2  
       If n is even:   1 Initial comparison for initializing min and max, 
                           and 3(n-2)/2 comparisons for rest of the elements  
                      =  1 + 3*(n-2)/2 = 3n/2 -2
*/