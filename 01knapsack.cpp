#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[], int val[], int w, int n){
	int static t[4+1][7+1];
	memset(t,-1,sizeof(t));
	//base case
	if(w==0 || n==0)
		return 0;
	if(t[n][w]!=-1){
		cout<<"value found\n";
		return t[n][w];
	}
	if(wt[n-1]<=w){
		cout<<"in if \n";
		return t[n][w]=max(val[n-1] + knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt, val,w, n-1));
	}
	else{
		cout<<"in else part \n";
	 return t[n][w]=knapsack(wt, val, w, n-1);
	}
}
int main(){
	int wt[] = {1,3,4, 5};
	int val[] = {1, 4, 5,7};
	int w= 7;
	int n = sizeof(wt)/sizeof(wt[0]);
	cout<<"N is "<<n<<endl;
	int ans = knapsack(wt, val, w, n);
	cout<<"Answer is "<<ans;
	return 0;
}