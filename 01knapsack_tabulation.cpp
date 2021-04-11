//Tabulation aka bottom up approach
//https://www.youtube.com/watch?v=ntCGbPMeqgg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=5

#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[], int val[], int w, int n){
	int static t[4+1][7+1];
	memset(t,-1,sizeof(t));
	for(int i = 0;i<n+1;i++){
		for(int j = 0;j<w+1;j++){
			if(i==0||j==0)
				t[i][j] = 0;
		}
	}
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