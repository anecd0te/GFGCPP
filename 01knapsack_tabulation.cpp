//Tabulation aka bottom up approach
//https://www.youtube.com/watch?v=ntCGbPMeqgg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=5

#include<bits/stdc++.h>
using namespace std;
int static t[4+1][7+1];
int knapsack(int wt[], int val[], int w, int n){
	for(int i = 0;i<n+1;i++){
		for(int j = 0;j<w+1;j++){
			if(i==0||j==0)
				t[i][j] = 0;
		}
	}
	for(int i = 1;i<n+1;i++){
		for(int j = 1;j<w+1;j++){
			if(wt[i-1]<=j){
				t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
			}
			else t[i][j] = t[i-1][j];
		}
	}
	return t[3][7];
}
int main(){
	int wt[] = {1,3,4, 5};
	int val[] = {1, 4, 5,7};
	int w= 7; //total weight of knapsack
	int n = sizeof(wt)/sizeof(wt[0]);
	cout<<"N is "<<n<<endl;
	int ans = knapsack(wt, val, w, n);
	cout<<"Answer is "<<ans;
	return 0;
}