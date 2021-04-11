#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[], int val[], int w, int n){
	if(w==0 || n==0)
		return 0;
	if(wt[n-1]<=w){
		return max(val[n-1]+knapsack(wt, val, w-wt[n-1], n-1),knapsack(wt, val, w, n-1));
	}
	else if(wt[n-1]>w)
		return knapsack(wt, val, w, n-1);
}
int main(){
	int wt[] = {1,3,4, 5};
	int val[] = {1, 4, 5,7};
	int w= 7;
	int n = sizeof(wt)/sizeof(wt[0]);
	//cout<<"N is "<<n<<endl;
	int ans = knapsack(wt, val, w, n);
	cout<<"Answer is "<<ans<<endl;
	return 0;
}