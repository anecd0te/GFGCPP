#include<bits/stdc++.h>
using namespace std;
static int t[4][51];
int knapsack(int val[], int wt[], int w, int n){
    if(w==0 || n==0)
        return 0;
    if(t[n][w]!=-1)
        return t[n][w];
    if(wt[n-1]<=w){
        return t[n][w]=max(val[n-1]+knapsack(val, wt, w-wt[n-1], n-1), knapsack(val, wt, w, n-1));
    }
    else return t[n][w]=knapsack(val, wt, w, n-1);
}
//calculating maximum profit;
int main(){
    int w = 50;
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int n = sizeof(wt)/sizeof(wt[0]);
    memset(t, -1, sizeof(t));
    //cout<<t[1][1]<<endl;
    cout<<knapsack(val, wt, w, n);

    return 0;
}