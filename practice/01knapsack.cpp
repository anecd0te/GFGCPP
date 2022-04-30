#include<bits/stdc++.h>
using namespace std;
int knapsack(int val[], int wt[], int w, int n){
    if(w==0 || n==0)
        return 0;
    if(wt[n-1]<=w){
        return max(val[n-1]+knapsack(val, wt, w-wt[n-1], n-1), knapsack(val, wt, w, n-1));
    }
    else return knapsack(val, wt, w, n-1);
}
//calculating maximum profit;
int main(){
    int w = 50;
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<knapsack(val, wt, w, n);
    return 0;
}